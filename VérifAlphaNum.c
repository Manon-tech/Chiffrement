#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int verifAlphaNum(char *message){


    wchar_t TabAlphaNum[32]=
            {'@',',','&','"','(','!',')','-','_','$','*','=','+',
             '#',',','?','.',';','/','\\','|','%','<','>','_','{','}','[',']'};

    for(unsigned i = 0; i < strlen(message); i++){
        for(unsigned j = 0; j < 32; j++){
            if(message[i] == TabAlphaNum[j]){

                return 1;
            }
        }
    }
    return 0;
}