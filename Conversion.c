#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"


void conversion(char chaine[]){
	char accent[] = {'é','è','ë','ê','à','â','ä','ï','î','ô','ö','ù','û','ü','ç','Â','Ä','À','Ê','Ë','É','È','Ç','Ô','Ö','Î','Ï'};
	char remplacement[] = {'e','e','e','e','a','a','a','i','i','o','o','u','u','u','c','A','A','A','E','E','E','E','C','O','O','I','I'};
	int longueur = strlen(chaine);
	char c;
	for(int curseur = 0; curseur < longueur; curseur++){
		c = chaine[curseur];
		for(int curseur2 = 0; curseur2 < 27; curseur2++){
			if(c == accent[curseur2]){
				chaine[curseur] = remplacement[curseur2];
			}
		}
	}
}

