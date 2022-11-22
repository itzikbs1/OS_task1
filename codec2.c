#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//encode the string
void encode_2(char * src, char * dst, int len){
    char *buffer=(char*)malloc(len);
    for(int i=0; i < strlen(src); i++){
        buffer[i] = -(src[i]);
    } 

    printf("%s",buffer);
    printf("\n");

}

//decode the encoded string
void decode_2(char* src, char * dst, int len){
    char* output= (char*)malloc(len);;
    for(int i=0; i < strlen(src); i++){
            output[i] = -(src[i]);
    }   

    printf("%s",output);
    printf("\n");

}

// int main(){
//     char *c = "ab";
//     char* b =encode_2(c, c, 1);
//     printf("encode : %s\n",b);
//     decode_2(b,"",strlen(b));
//     return 0;
// }

