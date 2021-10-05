#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct vector {
    int x;
    int y;
}vector;
vector sumVector(vector v1,vector v2){
    vector result ;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
struct test {
    int a;
    char str[34];
};
typedef struct complex{
    int imag;
    int real;
}comp;
void display(comp a){
    printf("the imag is %d\n",a.imag);
    printf("the real is %d\n",a.real);

}
typedef struct bank{
    int accnum;
    char name[30];
    float balance;
}bank;
typedef struct date{
    int day;
    int month;
    int year;
}date;
void displayDate(date d1){
    printf("the date is %d/%d/%d\n",d1.day,d1.month,d1.year);
}
bool datecmp(date d1,date d2){
    if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year){
        return true;
    } 
    else{
        return false;
    } 
}
int main(){
    // char str[] = "hello world";
    // printf("%s",strupr(str));
    // vector v;
    // vector * v1 = &v;
    // v1->x = 89;
    // v1->y = 14;
    // vector f;
    // struct vector * v2 = &f;
    // v2->x = 90;
    // v2->y = 63;
    // printf("%d , %d \n",v1->x,v1->y);
    // printf("%d , %d \n",v2->x,v2->y);
    // vector sum = sumVector(v,f);
    // printf("%d\n",sum.x);
    // printf("%d\n",sum.y);
    // struct test m1,m2;
    // struct test * mu = &m1;
    // struct test * me = &m2;
    // mu->a = 69;
    // strcpy(mu->str,"hello");
    // me->a = 53;
    // strcpy(me->str,"not hello");
    // printf("%d , %s\n",mu->a,mu->str);
    // printf("%d , %s\n",me->a,me->str);
    // struct test man;
    // char * st = "hello world";
    // struct test * m1 = &man;
    // int i =0;
    // while(*st!='\0'){
    //     man.str[i] = *st;
    //     st++;
    //     i++;
    // }
    // man.str[i] = '\0';
    // printf("%s\n",m1->str);
    // comp c1,c2;
    // comp * cc = &c1;
    // comp * cd = &c2;
    // cc->imag = 90;
    // cc->real = 23;
    // cd->imag = 54;
    // cd->real = 45;
    // printf("%d , %d\n",cc->real,cd->real);
    // printf("%d , %d\n",cc->imag,cd->imag);
    // comp complex[5];
    // comp * cc = complex;
    // for(int i = 0;i<5;i++){
    //     scanf("%d",&cc->imag);
    //     fflush(stdin);
    //     scanf("%d",&cc->real);
    //     cc++;
    // }
    // for(int i =0;i<5;i++){
    //      display(complex[i]);
    // }
    // bank b1 = {1000,"aayush",980000};
    // printf("%d , %s , %0.3f ",b1.accnum,b1.name,b1.balance);
    // date d1 = {02,04,2021};
    // date d2 = {02,04,2021};
    // displayDate(d1);
    // printf("%d\n",datecmp(d1,d2));
    return 0;
}