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
*  Nom du fichier :    Majuscules.c                                           *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Majuscule.h"

void majuscules(wchar_t chaine[]){
	wchar_t lettres[26] = L"abcdefghijklmnopqrstuvwxyz";
	int longueur = wcslen(chaine);
	for(int curseur = 0; curseur < longueur; curseur++){
		if(chaine[curseur] >= 'a' && chaine[curseur] <= 'z'){
			int indice = 0;
			while(chaine[curseur] != lettres[indice]){
				indice++;
			}
			chaine[curseur] = 'A' + indice;
		}
	}
}
