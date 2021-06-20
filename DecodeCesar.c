/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet :    3                                                         *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :   Chiffrement de messages                                       *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :   Adami Julien                                               *
*                                                                             *
*  Nom-prénom2 :   Piquemal Manon                                             *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :    DecodeCesar.c                                          *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DecodeCesar.h"


void decodeCesar(wchar_t *chaine, int n){
    int longueur = wcslen(chaine);
    int curseur = 0;
    n = 26 - n;
    while(curseur < longueur){
        if(chaine[curseur]>= 'a' && chaine[curseur] <= 'z'){
            chaine[curseur] = 'a' + ((chaine[curseur]-'a')+n) %26;
        }
        if(chaine[curseur]>= 'A' && chaine[curseur] <= 'Z'){
            chaine[curseur] = 'A' + (chaine[curseur]-'A'+n) %26;
        }
        if(chaine[curseur]>= '0' && chaine[curseur] <= '9'){
            chaine[curseur] = '0' + (chaine[curseur]-'0'+n) %10;
        }
        curseur++;
    }
}
