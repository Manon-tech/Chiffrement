#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"



void conversion(char chaine[]){
	char accent[] = "éèëêàâäïîôöùûüçÂÄÀÊËÉÈÇÔÖÎÏ";
	char remplace[] = "eeeeaaaiioouuucAAAEEEECOOII";
	
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


