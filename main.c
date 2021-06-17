#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VerifAlphaNum.h"
#include "César.h"
#include "VerifCode.h"

int main(){

    //déclaration de la variable  contenant le message de l'utilisateur
    char message[100];
    //variable du choix de l'utilisateur
    char choixM;
    printf("Saisir le message à chiffrer ou à déchiffrer  :");
    printf("\n");
    //récupération du message utilisateur
    scanf("%s", message );
    // boucle de demande si le message saisi est incorrect
  while (  verifAlphaNum(message)==1 ){

      printf("Message incorrect recommencez svp : ");
      scanf("%s", message );
      printf("\n");
  }

  //choix de la méthode pour chiffrer ou déchiffrer
    printf("\n");
    printf("Choisir la méthode pour chiffrer ou  déchiffrer le message :\n   - c pour César\n"
           "   - v pour Vigenère\n");

    scanf("%c", choixM);
    while(choixM!=c||choixM!=v){
        printf("Entrée invalide recommencez svp : ");
        scanf("%c", choixM);
        printf("\n");
    }

    printf("\n");
    //César choix clé
    printf("Choisir la clé ( elle ne doit pas être négative ou nulle :  )");
    scanf("d", choixClé);

    while(VerifCode(choixClé)==1){
        printf("Entrée invalide recommencez svp : ");
        scanf("d", choixClé);
        printf("\n");
    }
    printf("\n");


}
