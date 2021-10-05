#include<stdio.h>
void swap(int *a,int *y){
    int temp;
    temp = *a;
    *a = *y;
    *y = temp;
}
int main(){
    //pointers
    // int a = 98;
    // int *i = &a;
    // int **l = &i;
    // char y = 'a';
    // char *u = &y;
    // printf("%u\n",&a);  
    // printf("%d\n",a);
    // printf("%u\n",&i);
    // printf("%u\n",&a);
    // printf("%u\n",*(&i));
    // printf("%d\n",*(i));
    // printf("%u\n",&l);
    // printf("%d\n",*(&l));
    // printf("%d\n",*l);

    // printf("%u\n",&a);
    // printf("%u\n",&i);
    // printf("%u\n",*&a);
    // printf("%u\n",*&i);
    // // printf("%d\n",*i);

    // printf("%c\n",y);
    // printf("%u\n",&y);
    // printf("%c\n",*u);
    // printf("%u\n",*(&u));
    // printf("%u\n",&u);
    // printf("%c",*u);
    //swaping algorithm using pointers
    // int a = 6;
    // int b = 9;
    // printf("%d , %d\n",a,b);
    // swap(&a,&b);
    // printf("%d , %d\n",a,b);
    return 0;
}