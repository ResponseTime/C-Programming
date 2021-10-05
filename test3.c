#include<stdio.h>

int main(int argc, char**argv){
    if(argc!=4){
        printf("NO");
        return 1;
    }
    printf("The first arg is %s\n",argv[1]);
    printf("The first arg is %s\n",argv[2]);
    printf("The first arg is %s\n",argv[3]);
    return 0;
}