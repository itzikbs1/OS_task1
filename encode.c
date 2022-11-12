#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


int addOne(int x){
    int m = 1;
    // Flip all the set bits
    // until we find a 0
    while( x & m ){
        x = x ^ m;
        m <<= 1;
    }    
    // flip the rightmost 0 bit
    x = x ^ m;
    return x;
}

//Function to swap two numbers
void swap(char *x, char *y) {
    char t = *x; *x = *y; *y = t;
}
// Function to reverse buffer
char* reverse(char *buffer, int i, int j){
    while (i < j) {
        swap(&buffer[i++], &buffer[j--]);
    }
    return buffer;
}
// Iterative function to implement itoa() function
char* itoa(int value, char* buffer, int base){
    // invalid input
    if (base < 2 || base > 32) {
        return buffer;
    }
    int n = abs(value);
    int i = 0;
    while (n)
    {
        int r = n % base;
        if (r >= 10) {
            buffer[i++] = 65 + (r - 10);
        }
        else {
            buffer[i++] = 48 + r;
        }
        n = n / base;
    }
    if (i == 0) {
        buffer[i++] = '1';

    }
    if (value < 0 && base == 10) {
        buffer[i++] = '-';
    }
 
    buffer[i] = '\0'; // null terminate string
 
    return reverse(buffer, 0, i - 1);
}
void stringasbinary(char* s, char * output)
{
    // A small 9 characters buffer we use to perform the conversion
    // char output[20];
    // Until the first character pointed by s is not a null character
    // that indicates end of string...
    while (*s)
    {
        int ascii = (int)(*s);
        ascii = ~ascii;
        ascii = addOne(ascii);
        printf("%d\n", ascii);
        itoa(ascii, output, 2);
        s++;
    }
}

void encode_2(char * src, char * dst, int len){
    char buffer[20];
    char res[100];
    size_t size = 1;
    while (len)
    {
        stringasbinary(src, buffer);
        strncat(res, buffer, strlen(buffer));
        strncat(res, "#", size);
        len--;
        src++;
    }
    for (int i = 0; i < strlen(res); i++)
    {
        if (res[i] != '#')
        {
            printf("%c", res[i]);
        }
    }
}
int main(){
    char *c = "A";
    encode_2(c, c, 1);
    return 0;
}

