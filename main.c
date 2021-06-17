#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VerifAlphaNum.h"


int main(){
    char *message;
    printf("Saisir le message à chiffrer ou à déchiffrer  :");
    scanf("%p", &message );
  if( 1 == verifAlphaNum(message) ){

      printf("Message incorrect recommencez svp : ");
      scanf("%p", &message );
  }
}