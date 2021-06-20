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
*  Nom du fichier :    Conversion.c                                           *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"


void conversion(wchar_t *chaine){

    wchar_t accent[24] = L"éèëêàâäïîôöùûüçÂÄÀÊËÉÈÇÔÖÎÏ";
    wchar_t remplace[24] = L"eeeeaaaiioouuucAAAEEEECOOII";

    for(unsigned curseur = 0; curseur < wcslen(chaine); curseur++){
        for(unsigned curseur1 = 0; curseur1 < 24; curseur1++){
            if(chaine[curseur] == accent[curseur1]){
                chaine[curseur] = remplace[curseur1];
            }
        }
    }
}

