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
*  Nom du fichier :    vigenere.c                                             *
*                                                                             *
******************************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vigenere.h"

int vigenere(wchar_t *message, wchar_t *cle){


    wchar_t lettres[26] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(unsigned curseur = 0; curseur < wcslen(message); curseur++){
        int nbSaut;
        int cle1;

        wchar_t letterCode = cle[(curseur - nbSaut )% wcslen(cle)];

        for(unsigned j = 0; j < 26; j++){
            if(letterCode == lettres[j]){
                cle1 = j;
            }
        }

        if(message[curseur] >= 'a' && message[curseur] <= 'z'){
            message[curseur] = 'a' + ((message[curseur] - 'a') + cle1) % 26;
        }
        if(message[curseur] >= 'A' && message[curseur] <= 'Z'){
            message[curseur] = 'A' + ((message[curseur] - 'A') + cle1) % 26;
        }
        if(message[curseur] >= '0' && message[curseur] <= '9'){
            message[curseur] = '0' + ((message[curseur] - '0') + cle1) % 10;
        }
        if(message[curseur] == 32){
            nbSaut++;
        }
    }
}
