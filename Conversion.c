#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conversion.h"



// Fonction de remplacements des accents
// Demande un tableau wchar_t
void replaceAccents(wchar_t *message){
    wchar_t accents[54] = L"ÀÁÂÃÄÅàáâãäåÒÓÔÕÖØòóôõöøÈÉÊËèéêëÌÍÎÏìíîïÙÚÛÜùúûüÿÑñÇç";
    wchar_t sansAcc[54] = L"AAAAAAaaaaaaOOOOOOooooooEEEEeeeeIIIIiiiiUUUUuuuuyNnCc";

    for(unsigned i = 0; i < wcslen(message); i++){
        for(unsigned j = 0; j < 54; j++){
            if(message[i] == accents[j]){
                message[i] = sansAcc[j];
            }
        }
    }
