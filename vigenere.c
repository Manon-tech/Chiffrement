#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vigenere.h"

void vigenere(wchar_t chaine[], wchar_t cle[]){
	wchar_t lettres[26] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	wchar_t chaineCle[100];
	int longueur = wcslen(chaine);
	int indice;
	int curseurCle = 0;
	int tailleCle = wcslen(cle);
	if(tailleCle <= longueur){
		for(int curseur = 0; curseur < longueur; curseur++){
			chaineCle[curseur] = cle[indice];
			indice++;
			if(indice == tailleCle){
				indice = 0;
			}
		}
	}
	for(int curseur = 0;  curseur < longueur; curseur++){
		indice = 0;
		while(chaine[curseur] != lettres[indice]){
			indice++;
		}
		chaine[curseur] = 'A' + (chaine[curseur]-'A'+indice) %26;
	}
}
