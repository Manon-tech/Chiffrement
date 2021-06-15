#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cesar.h"

void cesar(char chaine[], int n){
	int longueur = strlen(chaine);
	int curseur = 0;
	while(curseur < longueur){
		if(chaine[curseur]>= 'a' && chaine[curseur] <= 'z'){
			chaine[curseur] += n;
		}
		if(chaine[curseur]>= 'A' && chaine[curseur] <= 'Z'){
			chaine[curseur] += n;
		}
	}
	curseur++;
}
