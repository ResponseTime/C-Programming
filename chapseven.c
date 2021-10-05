#include<stdio.h>
void printArr(int * ptr,int n){
    for(int i = 0;i<n;i++){
        printf("%d\n",*ptr);
        ptr++;
    }
}
void print(int (*y)[3],int n,int k){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<k;j++){
            printf("%d\n",*y);
            y++;
        }
    }
}
int main(){
    //arrays
    // int arr [3] ={1,2,3};
    // for(int i = 0;i<5;i++){
    //     scanf("%d\n",&arr[i]);
    // }
    // for(int i = 0;i<5;i++){
    //     printf("%d, ",arr[i]);
    // }
    //pointer arithmetic
    // int a = 78;
    // int * ptr = &a;
    // // printf("%u\n",&a);
    // printf("%d\n",*&ptr);
    // ptr++;
    //ptr--;
    // printf("%d\n",*&ptr);
    // char a = 34;
    // printf("%c",a);
    // int * a = arr;
    // printf("%d\n",*++a);
    //quick quiz
    // int a = 89;
    // int * ptr = &a;
    // printf("%u\n",*&ptr);
    // ptr--;
    // printf("%u\n",*&ptr);
    // int n = 89;
    // int * ptr1 = &n;
    // int * ptr2 = &n;
    // ptr2 = ptr2 + 3;
    // int x = ptr2 - ptr1;
    // printf("%u\n",*&ptr1);
    // printf("%u\n",*&ptr2);
    // printf("%d\n",x);
    //pointer to an array
    // int a [5];
    // int * u = &a[0];
    // for(int i = 0;i<5;i++){
    //     scanf("%d",*&u);
    //     u++;
    // }
    // for(int i = 0;i<5;i++){
    //     printf("%d ",a[i]);
    // }
    //functions for arrays
    // int a [] = {1,2,4,56,7,9};
    // printArr(a,6);
    //2D array
    int arr [3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("enter the value in row %d and column %d\n",i+1,j+1);
            scanf("%d",&arr);
        }
    }
    print(arr,3,3);
    return 0;
}
