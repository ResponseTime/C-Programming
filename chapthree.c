#include<stdio.h>

int main(){
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    // age>=18?printf("you can drive"):printf("you cannot drive");
    // switch (age)
    // {
    // case 18:
    //     printf("drive");
    //     break;
    // case 15:
    // printf("no");
    // break;

    // default:
    // printf("default");
    //     break;
    // }
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks<60){
        printf("F");
    }
    else if(marks>=60 && marks<70){
        printf("D");
    }
    else if(marks>=70 && marks<80){
        printf("C");
    }
    else if(marks>=80 && marks<90){
        printf("B");
    }
    else if(marks>=90 && marks<=100){
        printf("A");
    }
    else{
        printf("invalid marks");
    }
    return 0;
}
