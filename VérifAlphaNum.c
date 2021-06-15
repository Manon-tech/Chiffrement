#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"
#define


int VérifAlphaNum(char chaine*){

    for( unsigned  i = 0; i < strlen(chaine); i++){

        if ((chaine[i]>32 && chaine[i]<48) ||(chaine[i]>57 && chaine[i]<65) ||(chaine[i]>90 && chaine[i]<97)|| (chaine[i]>122 && chaine[i]<=127) || (chaine[i]>32 && chaine[i]<48)  ){
            return 0;
        }

    }
}

