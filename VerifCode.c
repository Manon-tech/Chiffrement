#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VerifCode.h"

int VerifCode(char *code){

    code="012332";
    for(unsigned i = 0; i < strlen(code); i++){
        for(unsigned j = 0; j < 10; j++){
            if(code[i] <1||code[i]>0){

                return 1;
            }
        }
    }
    return 0;
}