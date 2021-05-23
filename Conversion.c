#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"


void conversion(char chaine[]){
	int longueur = strlen(chaine);
	int curseur = 0;
	char c;
	while(curseur < longueur){
		c = chaine[curseur];
		if(c == 'é' || c == 'è' || c == 'ë' || c == 'ê'){
			chaine[curseur] = 'e';
		}
		if(c == 'à' || c == 'â' || c == 'ä'){
			chaine[curseur] = 'a';
		}
		if(c == 'ï' || c == 'î'){
			chaine[curseur] = 'i';
		}
		if(c == 'ô' || c == 'ö'){
			chaine[curseur] = 'o';
		}
		if(c == 'ù' || c == 'û' || c == 'ü'){
			chaine[curseur] = 'u';
		}
		if(c == 'ç'){
			chaine[curseur] = 'c';
		}
		curseur++;
	}
}

