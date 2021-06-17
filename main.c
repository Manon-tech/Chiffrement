#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VerifAlphaNum.h"
#include "Cesar.h"
#include "VerifCode.h"
#include <stdbool.h>

int main(){

    //déclaration de la variable  contenant le message de l'utilisateur
    char message[100];
    //variable du choix de l'utilisateur
    char choixM;
    //variable choix de la clé
    int choixCle;
    bool verif=false;
    printf("Saisir le message à chiffrer ou à déchiffrer  :");
    printf("\n");
    //récupération du message utilisateur
    scanf("%s", message );
    if(verifAlphaNum(message)==1){
        printf("Message incorrect recommencez svp : ");
        scanf("%s", message );
        verif=false;}
    // boucle de demande si le message saisi est incorrect
  while ( verif){
      if(verifAlphaNum(message)==1){
      printf("Message incorrect recommencez svp : ");
      scanf("%s", message );
      verif=false;
      printf("\n");}
      else{
      	verif=true;
      }
  }

  //choix de la méthode pour chiffrer ou déchiffrer
    printf("\n");
    printf("Choisir la méthode pour chiffrer ou  déchiffrer le message :\n   - c pour César\n"
           "   - v pour Vigenère\n");

    scanf("%c", choixM);
    while(choixM!='c'||choixM!='v'){
        printf("Entrée invalide recommencez svp : ");
        scanf("%c", choixM);
        printf("\n");
    }

    printf("\n");
    //César choix clé
    printf("Choisir la clé ( elle ne doit pas être négative ou nulle :  )");
    scanf("%d", choixCle);

    while(VerifCode(choixCle)==1){
        printf("Entrée invalide recommencez svp : ");
        scanf("%d", choixCle);
        printf("\n");
    }
    printf("\n");


}
