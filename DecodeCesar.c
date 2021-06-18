#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cesar.h"


void decodeCesar(wchar_t chaine[], int n){
	int longueur = strlen(chaine);
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
