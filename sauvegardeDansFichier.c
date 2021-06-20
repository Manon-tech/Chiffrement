#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sauvegardeDansFichier(wchar_t *message){

    FILE* fic = NULL;
    fic = fopen("MessageCoD.txt", "w");

    if(fic != NULL){
        fwprintf(fic, L"%ls", message);
        fclose(fic);
    }
}