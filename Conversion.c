#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"


void conversion(wchar_t chaine[]){
	wchar_t accent[] = L"éèëêàâäïîôöùûüçÂÄÀÊËÉÈÇÔÖÎÏ";
	wchar_t remplace[] = L"eeeeaaaiioouuucAAAEEEECOOII";
	
	for(int curseur = 0; curseur < strlen(chaine); curseur++){
		int curseur2 = 0;
		while(curseur2 < strlen(accent)){
			if(chaine[curseur] == accent[curseur2]){
				chaine[curseur] = remplace[curseur2];
				
			}
			curseur2++;
		}
	}
}
