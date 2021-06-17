#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VerifAlphaNum.h"


int main(){
    char message[100];
    printf("Saisir le message à chiffrer ou à déchiffrer  :");
    scanf("%s", message );
  if(  verifAlphaNum(message)==1 ){

      printf("Message incorrect recommencez svp : ");
      scanf("%s", message );
  }
}
