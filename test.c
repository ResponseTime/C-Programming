#include<stdio.h>
#include<string.h>
void encrypt(char * st){
    int key;
    while(*st!='\0'){
        key = ((int)*st)+1;
        *st = key;
        st++;
    }
}
void decrypt(char * st){
    int key;
    while(*st!='\0'){
        key = ((int)*st)-1;
        *st = key;
        st++;
    }
}
void change(char * str){
    char srr[34];
    int i =0;
    gets(srr);
    fflush(stdin);
    while(srr[i]!='\0'){
        *str = srr[i];
        str++;
        i++;
    }
    
}
int indexOf(char * ptr,char  a){
    int index = 0;
    char * pr = strstr(*ptr,a);
    index = *ptr -*pr;
    return index;
}
typedef struct empl{
    int a;
    char * ar;
}emp;
void reverse(char * str){
    int temp;
    int len = strlen(str);
    for(int i =0;i<len/2;i++){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
const char * get_string(char * str){
    char * st;
    printf("%s",str);
    gets(st);
    return st;
}
void str(char * str){
    char st[45];
    gets(st);
    int i = 0;
    while(st[i]!='\0'){
        str[i] = st[i];
        i++;
    }
    str[i] = '\0';
}
void reversse(int * a){
    int temp;
    
    for(int i =0;i<7/2;i++){
        int len = 7;
        temp = a[i];
        a[i] = a[len-i-1];
        a[len-i-1] = temp;
    }
    
}
int main(){
    // char str [] = "hello there";
    // encrypt(str);
    // printf("%s\n",str);
    // decrypt(str);
    // printf("%s\n",str);
    // char str [] = "hello there";
    // change(str);
    // puts(str);
    // int i =0;
    // int inex;
    // while(str[i]!='\0'){
    //     if(str[i]=='l'){
    //         inex = str[i];
    //     }
    //     i++;
    // }
    // printf("%d",inex);
    // int h = indexOf(str,'l');
    // printf("%d",h);
    // emp e1;
    // emp * r = &e1;
    // r->a = 101;
    // r->ar = &str[0];
    // printf("%d\n",r->a);
    // while(*r->ar!='\0'){
    //     printf("%c",*r->ar);
    //     r->ar++;
    // }
    // puts(r->ar);
    // char str[] = "hello there";
    // reverse(str);
    // puts(str);
    // char * ans= get_string("hello world: ");
    // puts(ans);
    // char ptr[]= "hello world";
    // str(ptr);
    // puts(ptr);
    int arr[] = {1,2,4,56,7,89,0};
    reversse(arr);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}