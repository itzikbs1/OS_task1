void encode_1(char * src, char * dst, int len){
    
    int i = 0;
    while (len > 0){
        if(isalpha(src[i]) != 0){   // check if is alphabet
            if(src[i]>= 'A' && src[i] <='Z'){ //check if is uppercase
                src[i] = tolower(src[i]);
                i++;
                len--;
    
            }
            if(src[i] >= 'a' && src[i] <= 'z' ){ //check if is lowercase
                src[i] = toupper(src[i]);
                i++;
                len--;
            }
        }
    }

    for (int j= 0; j<i; j++){
        printf("%c" , src[j]);
    }
    printf("%s" , "\n");
}


