#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codec1.c"
#include "codec2.c"


int main(int argc, char *argv[]) {

    if( strcmp(argv[1] ,"codec1") == 0){
        encode(argv[2], argv[2], strlen(argv[2]));
    }

    if(strcmp(argv[1] ,"codec2") == 0){
        encode_2(argv[2], argv[2], strlen(argv[2]));
    }

}


