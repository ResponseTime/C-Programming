#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct person{
    char *name;
    char *num;
}person;
int main(int argc, char**argv){
    //Big O = upper bound higher amount of steps, Big Omega = lower bound lower amount of steps, Big theta = when O and Omega are same
    //linear search left to right - right to left (n)
    //binary search n/2 array is sorted if no doors ret false start if num==mid elif num>mid search right half elif num<mid search left half
    // int array [] = {4,6,8,2,7,5,0};
    // for(int i =0;i<7;i++){
    //     if(array[i]==87){
    //         printf("Found\n");
    //         return 0;
    //     }  
    // }
    // printf("Not found\n");
    // return 1;
    // char *str[] = {"ron","jinny","Me","joy"};
    // for(int i =0;i<4;i++){
    //     if(strcmp(str[i],"jerry")==0){
    //         printf("Found\n");
    //         return 0;
    //     }
    // }
    // printf("Not found\n");
    // return 1;
    // int array [] = {4,6,8,2,7,5,0};
    //bubble sort
    // for(int i =0;i<7;i++){
    //     for(int j = i+1;j<7;j++){
    //         if(array[i]>array[j]){
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }
    // for(int i = 0;i<7;i++){
    //     printf("%d ,",array[i]);
    // }
    // printf("%d",array[7/2]);
    //binary search
    // for(int i =0;i<7;i++){
    //     if(6==array[7/2]){
    //         printf("Found");
    //         return 0;
    //     }
    //     else if(6>array[7/2]){
    //         for(int i =3;i<7;i++){
    //             if(6==array[i]){
    //                 printf("Found\n");
    //                 return 0;
    //             }
    //         }
    //     }
    //     else if(6<array[7/2]){
    //         for(int i = 0;i<3;i++){
    //             if(6==array[i]){
    //                 printf("Found\n");
    //                 return 0;
    //             }
    //         }
    //     }
    //     printf("Not found\n");
    //     return 1;
    // }
    // person p1={"harry","89999923"};
    // person *op  = &p1;
    // printf("%s\n",op->name);
    // printf("%s\n",op->num);
    // int array [] = {4,3,6,2,7,5,1,0};
    //selection sort Big theta(n**2) O(n**2) Omega(n**2)
    // int min;
    // for(int i =0;i<8;i++){
    //     min = i;
    //     for(int j = i+1;j<8;j++){
    //         if(array[min]>array[j]){
    //             min = j;
    //         }
    //         int temp = array[min];
    //         array[min] = array[i];
    //         array[i] = temp;
    //     }
    // }
    //bubble sort O(n**2) Omega(n)
    // for(int i = 0;i<7;i++){
    //     for(int j = i+1;j<7;j++){
    //         if(array[i]>array[j]){
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp; 
    //         }
    //     }
    // }
    //merge sort - sort left half sort right half merge O(n log n) Omega(n log n) Theta(n log n) //recursion

    // for(int i = 0;i<7;i++){
    //     printf("%d\n",array[i]);
    // }
    return 0;
}