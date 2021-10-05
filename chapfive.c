#include<stdio.h>
#include<math.h>
void gm(){
    printf("Good mornin\n");
}
void gf(){
    printf("Good afternoon\n");
}
void gn(){
    printf("Good night\n");
}
int sum(int a ,int b){
    return a+b;
}

int main(){
    // gm();
    // gf();
    // gn();
    // int c = sum(9,6);
    // printf("%d",c);
    int s;
    printf("Enter side\n");
    scanf("%d",&s);
    printf("%d",(int)pow(s,2));
    return 0;
}