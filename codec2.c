#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    buffer[i++] = '0';
    buffer[i] = '\0'; // null terminate string
    
    return reverse(buffer, 0, i - 1);
}
void convert_indexs(char* c){
    int len = strlen(c);
    while(len>0){
        if ((*c) == '1'){
            (*c) = '0';
        }else{
            (*c) = '1';
        }
        len--;
        c++;
    }
}
void add_one(char* rev){
    for (int i = strlen(rev)-1; i>=0; i--)
    {
        if(rev[i] == '0'){
            rev[i] = '1';
            break;
        }else{
            rev[i] = '0';
        }
    }    
}
void minus_one(char* c){
    for (int i = strlen(c)-1; i>=0; i--)
    {
        if(c[i] == '1'){
            c[i] = '0';
            break;
        }else{
            c[i] = '1';
        }
    }    

}
void stringasbinary(char* s, char* output, int flag)
{
    int ascii = (int)(*s);
    char* reverse = itoa(ascii, output, 2);
    // printf("reverse1: %s\n", reverse);
    convert_indexs(reverse);
    // printf("reverse: %s\n", reverse);
    if(flag){
        add_one(reverse);
    }else{
        minus_one(reverse);
    }
    // printf("reverse!!!: %s\n", reverse);
    output = reverse;
    int result = 0; 
    while (*reverse)
    {
        result *= 2;
        result += *reverse == '1' ? 1 : 0;
        ++reverse;
    }
    // printf("decimal num: %d\n", result);
    char out = result;
    char* res = &out;
    printf("output  %s\n", res);
}

void encode_2(char * src, char * dst, int len){
    char buffer[20];
    char res[100];
    size_t size = 1;
    while (len)
    {
        stringasbinary(src, buffer, 1);
        strncat(res, buffer, strlen(buffer));
        strncat(res, "#", 1);
        len--;
        src++;
    }
    // for (int i = 0; i < strlen(res); i++)
    // {
    //     if (res[i] != '#')
    //     {
    //         printf("%c", res[i]);
    //     }
    // }
}

void decode_2(char * src, char * dst, int len){
    char c[len];
    int idx=0;
    while (len>=0)
    {
        // printf("src = %c\n", (*c));

        if((*src) == '#'){
            // printf("135");
            // int ascii = (int)(*c);
            char buffer[20];
            char res[100];

            stringasbinary(c, buffer, 0);
            strncat(res, buffer, strlen(buffer));
            // strncat(res, '#', 1);
            // src++;
        }else{
            // printf("idx = %d\n", idx);
            c[idx] = (*src);
            idx++;

        }
        len--;

        src++;
    }
}
