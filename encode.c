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


// int addOne(int x){
//     int m = 1;
//     // Flip all the set bits
//     // until we find a 0
//     while( x & m ){
//         x = x ^ m;
//         m <<= 1;
//         x++;
//     }    
//     // flip the rightmost 0 bit
//     x = x ^ m;
//     return x;
// }

//Function to swap two numbers
// void swap(char *x, char *y) {
//     char t = *x; *x = *y; *y = t;
// }
// // Function to reverse buffer
// char* reverse(char *buffer, int i, int j){
//     while (i < j) {
//         swap(&buffer[i++], &buffer[j--]);
//     }
//     return buffer;
// }
// // Iterative function to implement itoa() function
// char* itoa(int value, char* buffer, int base){
//     // invalid input
//     if (base < 2 || base > 32) {
//         return buffer;
//     }
//     int n = abs(value);
//     int i = 0;
//     while (n)
//     {
//         int r = n % base;
//         if (r >= 10) {
//             buffer[i++] = 65 + (r - 10);
//         }
//         else {
//             buffer[i++] = 48 + r;
//         }
//         n = n / base;
//     }
//     if (i == 0) {
//         buffer[i++] = '1';

//     }
//     if (value < 0 && base == 10) {
//         buffer[i++] = '-';
//     }
//     buffer[i++] = '0';
//     buffer[i] = '\0'; // null terminate string
    
//     return reverse(buffer, 0, i - 1);
// }
// void convert_indexs(char* c){
//     int len = strlen(c);
//     while(len>0){
//         if ((*c) == '1'){
//             (*c) = '0';
//         }else{
//             (*c) = '1';
//         }
//         len--;
//         c++;
//     }
// }
// void add_one(char* rev){
//     for (int i = strlen(rev)-1; i>=0; i--)
//     {
//         if(rev[i] == '0'){
//             rev[i] = '1';
//             break;
//         }else{
//             rev[i] = '0';
//         }
//     }    
// }
// void stringasbinary(char* s, char* output)
// {
//     int ascii = (int)(*s);
//     char* reverse = itoa(ascii, output, 2);
//     printf("reverse1: %s\n", reverse);
//     convert_indexs(reverse);
//     printf("reverse: %s\n", reverse);
//     add_one(reverse);
//     printf("reverse!!!: %s\n", reverse);
//     output = reverse;
//     // int num = (int)(*reverse);
//     // printf("num = %d", num);
//     int result = 0; 
//     while (*reverse)
//     {
//         result *= 2;
//         result += *reverse == '1' ? 1 : 0;
//         ++reverse;
//     }
//     // int decimal_num = 0;
//     // int base = 1;
//     // int rem;
//     // while (num > 0) {  
//     //     rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
//     //     decimal_num = decimal_num + rem * base;  
//     //     num = num / 10; // divide the number with quotient  
//     //     base = base * 2;  
//     // }  
//     printf("decimal num: %d\n", result);
//     char out = result;
//     char* res = &out;
//     printf("output  %s\n", res);
// }

// void encode_2(char * src, char * dst, int len){
//     char buffer[20];
//     char res[100];
//     size_t size = 1;
//     while (len)
//     {
//         stringasbinary(src, buffer);
//         strncat(res, buffer, strlen(buffer));
//         len--;
//         src++;
//     }
//     // for (int i = 0; i < strlen(res); i++)
//     // {
//     //     if (res[i] != '#')
//     //     {
//     //         printf("%c", res[i]);
//     //     }
//     // }
// }
int main(){
    char *c = " ";
    encode_2(c, c, 1);
    return 0;
}

