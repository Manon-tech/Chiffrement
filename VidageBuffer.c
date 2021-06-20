#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// vidage du buffer
void ViderBuffer(){
    wchar_t entree;
    entree = getwchar();
    while(L'\n' != entree){
        entree = getwchar();
    }
}
