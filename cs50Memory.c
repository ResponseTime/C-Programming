#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void strcp(char * str,char * st){
    while(*str!='\0'){
        *st = *str;
        *str++;
        *st++;
    }
    *st = '\0';
}
// void malstrcp(char * str,char *st){
//     st =(char*)malloc((strlen(str))*sizeof(char));
//     int i = 0;
//     for(int i = 0;i<strlen(st);i++){
//         st[i] = *str;
//         str++;
//     }
//     st[i]='\0';
// //     // st[i] = '\0';
// //     while(*str!='\0'){
// //         st[i] = *str;
// //         str++;
// //         i++;
// //     }
// //     st[i] = '\0';
    
// }
int main(int argc, char**argv){
    // int n = 50;
    // int *p = &n;
    // printf("%u\n",*p);
    // printf("%d\n",*&p);
    // char str [] = "hello world";
    // char * ptr = str;
    // for(int i = 0;i<11;i++){
    //     printf("%u\n",ptr+i);
    // }
    // char str[] = "hello world my name is world";
    // char st[15];
    // // strcp(str,st);
    // malstrcp(str,st);
    // puts(st);
    // int *x;
    // *x = 80;
    // int *y = x;
    // *y = 13;
    // printf("%d",*x);
    // char * str =(char*)malloc(30*sizeof(char));
    // scanf("%s",str);
    // printf("%s",str);
    
    return 0;
}