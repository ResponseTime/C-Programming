#include<stdio.h>
void getAdd(int *a){
    printf("%u\n",&a);
}
int ten(int * j){
    return *j*10;
}
void sum(int a,int b){
    int * j= &a;
    int * k= &b;
    int s = *j + *k;
    printf("%d\n",s);
}
void avg(int a,int b){
    int * u = &a;
    int * i = &b;
    int av = (*u +*i)/2;
    printf("%d\n",av);
}
void sumNdavg(int a,int b,int *i,float *j){
    *i = a+b;
    *j = (float)*i/2;
}
int main(){
    // int a = 89;
    // printf("%u\n",&a);
    // printf("%d\n",*&a);
    // int i = 899;
    // printf("%u\n",&i);
    // getAdd(&i);
    // int k = 9;
    // int c = ten(&k);
    // printf("%d\n",c);
    // sum(8,4);
    // avg(4,6);
    // int u = 89;
    // int * i = &u;
    // int ** k = &i;
    // printf("%u\n",&i);
    // printf("%d",*&k);
    // int a = 9,sum,b = 8;
    // float f;
    // sumNdavg(a,b,&sum,&f);
    // printf("%d\n",sum);
    // printf("%f\n",f);
    // int i = 999;
    // int * y = &i;
    // int ** o = &y;
    // printf("%d\n",i);
    // printf("%d\n",*y);
    // printf("%d\n",**o);
    
    return 0;
}