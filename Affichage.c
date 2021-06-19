#include <stdio.h>
#include <stdlib.h>
#include "Affichage.h"


void afficher(wchar_t *chaine){

    printf("%ls",chaine);



    
}










void ViderBuffer(){
    wchar_t entree;
    entree = getwchar();
    while(L'\n' != entree){
        entree = getwchar();
    }
}