/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet :    3                                                          *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :   Chiffrement de messages                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :   Adami Julien                                               *
*                                                                             *
*  Nom-prénom2 :   Piquemal Manon                                             *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :    main.c                                             *
*                                                                             *
******************************************************************************/


#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Affichage.h"
#include "VerifAlphaNum.h"
#include "Conversion.h"
#include "EncodeCesar.h"
#include "DecodeCesar.h"
#include "Affichage.h"
#include "VidageBuffer.h"
//#include "vigenere.h"
#include "sauvegardeDansFichier.h"


int main(){
    //déclaration de la variable  contenant le message de l'utilisateur
    wchar_t message[100];


    printf("Saisir le message à chiffrer ou à déchiffrer  :");
    printf("\n");
    //récupération du message utilisateur
    fgetws(message, 200, stdin);

    int verifAlphaN = verifAlphaNum(message);

    // Si message de l'utilisateur incorrect
    while(verifAlphaN == 0){
        printf("Message incorrect, veuillez recommencer !\n");

        printf("Veuillez entrer une chaine de caractère valide : ");
        fgetws(message, 200, stdin);
        verifAlphaN = verifAlphaNum(message);
    }

    conversion(message);

    //saut de 3 lignes
    printf("\n");
    printf("\n");
    printf("\n");

    //afficher le message saisi par l'utilisateur
    //afficher(message);


    //saut de 3 lignes
    printf("\n");
    printf("\n");
    printf("\n");

    //demande du choix de l'algo
    printf("Quel algorithme voulez-vous utiliser?\n  Cesar : pressez c \nVigenere : pressez v \n");

    //declaration variable du choix de l'algorithme
    wchar_t choixMf = fgetwc(stdin);

    //boucle du choix de l'algorithme
    while(choixMf!='c'&&choixMf!='v'){

        printf("mauvais choix recommencez\n");
        //vidage du buffer pour éviter une boucle infini
        ViderBuffer();
        choixMf =fgetwc(stdin);

    }

    //saut de 3 lignes
    printf("\n");
    printf("\n");
    printf("\n");

    //choix du mode de l'algorithme : déchiffrage ou encodage
    printf("veuillez choisir le mode de l'algorithme : \n déchiffrage : pressez d\n encodage : pressez e \n");
    ViderBuffer();
    //variable de sélection du mode de l'algorithme
    wchar_t DouE = fgetwc(stdin);

    //boucle si le mode choisi est erroné
    while(DouE!='d'&&DouE!='e'){
        //saut de 3 lignes
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\nMauvais choix, veuillez recommencer  :  ");
        ViderBuffer();
        DouE = fgetwc(stdin);

    }

    //choix du Cesar
    if(choixMf=='c'){

        printf("Entrez la clé (elle doit être différente de 0) : ");

        // déclaration taille clé
        wchar_t cle[2];
        //pointeur de fin de saisir pour wcstol
        wchar_t *finSaisie;
        ViderBuffer();
        fgetws(cle, 2, stdin);

        int clef = wcstol(cle, &finSaisie, 2);

        //boucle si clé ==0
        while(clef == '0'){
            printf("Mauvais code, Veuillez recommencer\n");
            ViderBuffer();
            fgetws(cle, 2, stdin);
            clef = wcstol(cle, &finSaisie, 2);
        }

        //si le choix de l'utilisateur est d alors, sinon on exécute le cryptage du message
        if(DouE=='d'){
            decodeCesar(message,clef);
        }else{
            EncodeCesar(message,clef);
        }

        //sauvegarde dans un fichier le message après l'algorithme
        sauvegardeDansFichier(message);

    }

    

}



