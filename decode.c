#include <stdio.h>
#include <stdlib.h>
#include "codec1.c"
#include "codec2.c"


int main(int argc, char *argv[]) {
    if(strcmp(argv[1] ,"codec1") == 0){
        decode(argv[2], argv[2], strlen(argv[2]));
    }

    if(strcmp(argv[1] ,"codec2") == 0){
        printf("22");
        decode_2(argv[2], argv[2], strlen(argv[2]));
    }

}
