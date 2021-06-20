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
*  Nom du fichier :    sauvegardeDansFichier.c                                *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sauvegardeDansFichier(wchar_t *message){

    FILE* fic = NULL;
    fic = fopen("MessageCoD.txt", "w");

    if(fic != NULL){
        fwprintf(fic, L"%ls", message);
        fclose(fic);
    }
}
