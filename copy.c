#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include<stdio.h>
#include<fcntl.h>





int copy_helper(char* fname1, char* fname2){
    
    char c1, c2;
    char buff[20];
    int idx=0;

    int f1 = open(fname1, O_RDONLY );
    int f2 = open(fname2, O_WRONLY);
          
    if (f1 ==-1 || f2 == -1){
        printf("error22");
        return -1;
    }

    int r_f1;
    int w_f2;
    do{
        r_f1= read(f1, &c1, 1);
        if (r_f1 == -1){
            perror("c8");
            return -1;
        }

        w_f2 = write(f2,&c1, 1);
        if (w_f2 == -1){
            perror("c7");
            return -1;
        }
    }while(r_f1 !=0 && w_f2 != 0);

    int c_f1 = close(f1);
    int c_f2 = close(f2);

    if (c_f1 == -1 || c_f2 == -1){
        perror("c1");
        exit(1);
    }
    return 1;
}

int copy_helper_link(char* fname1, char* fname2){

    size_t *f1, *f2;
    char c[30];
    
    int num= 0;
    int num_link;
        // printf("22\n");

    num= readlink(fname1,c,sizeof(c)); 
        // printf("%s", fname1);

    if(num == -1){
        printf("error2");            
        return -1;
    }
    // printf("%s", c);
    // printf("\n");

    num_link= symlink(c, fname2);
        printf("%s", fname2);

    if(num_link == -1){
        printf("error333");
        perror("symlink() error");

        return -1;
    }


    printf("file is copied\n");
    return 1;

}

void copy(char * fname1, char * fname2){
    int ans;
    ans = copy_helper(fname1, fname2);
    if(ans == -1){
        printf("Error openning files\n");
    }
    if(ans == 1){
        printf("file is copied\n");
    }
}


int main(int argc, char *argv[]) {

    struct stat buf;

    int opt = getopt(argc, argv, "l");
    if (opt != -1) // there is '-l', copy link contents
    {
        copy(argv[2], argv[3]);
    }
    else // there is no '-l'
    {
        if (lstat(argv[1], &buf) == -1) // get file's stats
        {
            perror("Error");
            exit(-1);
        }
        if (S_ISLNK(buf.st_mode)) // if file is a symbolic link
        {
            copy_helper_link(argv[1], argv[2]);
        }
        // else // file is original
        // {
        //     printf("89");
        // }
    }
   
}