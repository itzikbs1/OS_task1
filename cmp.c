#include <stdio.h>
#include <stdlib.h>

/*
compare file program
*/
int cmp_helper (char* fname1, char* fname2){

    FILE *f1 , *f2;
    char c1,c2;

    f1= fopen(fname1, "r");
    f2= fopen(fname2, "r");

    if(!f1 || !f2){
        return -1;
    }

    do{
        c1 = fscanf(f1, "%c", &c1);
        c2 = fscanf(f2, "%c", &c2);

    }while (c1==1 && c2==1 && c1==c2);

    fclose (f1);
    fclose (f2);
    return (c1==EOF && c2 == EOF);

}

void cmp(char* fname1 , char* fname2){
    int ans;
    ans = cmp_helper(fname1, fname2);
    if(ans == -1){
        printf("Error openning files\n");
    }
    else{
        if(ans==1){
            printf("Identical\n");
        }
        else{
            printf("Not identical\n");
        }
    }
}


int main(int argc, char *argv[]) {
    cmp(argv[1], argv[2]);

    
}