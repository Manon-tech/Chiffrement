#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VerifAlphaNum.h"


int verifAlphaNum(wchar_t *message){


    wchar_t TabAlphaNum[32]=
            {'@',',','&','"','(','!',')','-','_','$','*','=','+',
             '#','?','.',';','/','\\','|','%','<','>','_','{','}','[',']'};

    for(unsigned i = 0; i < wcslen(message); i++){
        for(unsigned j = 0; j < 32; j++){
            if(message[i] == TabAlphaNum[j]){

                return 0;
            }
        }
    }
    return 1;
}
