#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main(int argc,char *argv[]){
    char str[54];
    char * ptr = str;
    for(int i =0;i<7;i++){
        for(int j = 0;j<i+1;j++){
            printf("# ");
        }
        printf("\n");
    }
    for(int i = 0;i<8;i++){
        printf("# ");
    }
    printf("\n");
    for(int i = 7;i>0;i--){
        for(int j = i;j>0;j--){
            printf("# ");
        }
        printf("\n");
    }
    for(int i =0;i<5;i++){
        printf("%d\n",fib(i));
    }
    return 0;
}