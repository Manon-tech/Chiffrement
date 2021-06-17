#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"



void conversion(char chaine[]){
	wchar_t accent[27] = L"éèëêàâäïîôöùûüçÂÄÀÊËÉÈÇÔÖÎÏ";
	wchar_t remplacement[27] = L"eeeeaaaiioouuucAAAEEEECOOII";
	for(int curseur = 0; curseur < strlen(chaine); curseur++){
		for(int curseur2 = 0; curseur2 < wcslen(accent); curseur2++){
			if(chaine[curseur] == accent[curseur2]){
				chaine[curseur] = remplacement[curseur2];
			}
		}
	}
}

