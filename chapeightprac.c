#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int strle(char *str){
    int count =0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}
void slice(char * str,int m ,int n){
    int i = 0;
    while((i+m)<n){
        *(str+i) = *(str+i+m);
        i++;
    }
    str[i] = '\0';
}
void strcp(char *str,char * st){
    int i =0;
    while(*str!='\0'){
        st[i] = *str;
        str++;
        i++;
    }
    st[i] = '\0';
}
void encrypt(char *str){
    int key;
    while(*str!='\0'){
        key = (int)*str+1;
        *str = key;
        str++;
    }
}
void decrypt(char * str){
    while (*str!='\0')
    {
        *str = (int)*str-1;
        str++;
    }
    
}
int count(char * str,char a){
    int count = 0;
    while(*str!='\0'){
        if(*str == a){
            count++;
        }
        str++;
    }
    return count;
}
bool check(char * str,char a){
    bool check = false;
    while(*str!='\0'){
        if(*str == a){
            check = true;
        }
        str++;
    }
    return check;
}
int main(){
    // char str[32];
    // int i =0;
    // char c;
    // char *ptr = str;
    // while(c!='\n'){
    //     scanf("%c",&c);
    //     str[i] = c;
    //     i++;
    // }
    // str[i] = '\0';
    // printf("%s",str);
    // scanf("%s",str);
    // printf("%s",str);
    // char str [] = "hello world this is me";
    // // int d = 78;
    // // printf("%d",strle(str));
    // slice(str,1,13);
    // printf("%s",str);
    // char str[] = "hello the world";
    // char ar [23];
    // strcp(str,ar);
    // printf("%s",ar);
    // char a [] = "hello";
    // encrypt(a);
    // puts(a);
    // decrypt(a);
    // puts(a);
    // char * str = "hello my name is hello wht is yu hello";
    // printf("%d",count(str,'h'));
    // char str [] = "hello";
    // printf("%d",check(str,'p'));
    
    return 0;
}