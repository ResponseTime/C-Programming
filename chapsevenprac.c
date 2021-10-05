#include<stdio.h>
void reverse(int i[],int n){
    int temp;
    for(int k = 0;k<n/2;k++){
        temp = i[k];
        i[k] = i[n-k-1];
        i[n-k-1] = temp;
    }
    for(int j = 0;j<n;j++){
        printf("%d\n",i[j]);
    }
}
void com(int a [],int n){
    int count=0;
    for(int i = 0;i<n;i++){
        if(a[i]>=0){
            count++;
           
        }
    }
     printf("%d\n",count);
}
void coma(int a [],int n){
    int count=0;
    for(int i = 0;i<n;i++){
        if(a[i]<0){
            count++;
           
        }
    }
     printf("%d\n",count);
}
int main(){
    // int arr [10] = {1,2,3,4,5,6,7,8,9,10};
    // int * ptr = arr;
    // printf("%d\n",arr[2]);
    // printf("%d\n",*ptr+2);
    // int mul [11];
    // for(int i =0;i<=10;i++){
    //     mul[i] = 5*i;
    // }
    // for(int i = 0;i<=10;i++){
    //     printf("%d\n",mul[i]);
    // }
    // int array [10];
    // int *arr = &array[0];
    // for(int i = 0;i<10;i++){
    //     scanf("%d",&array[i]);
    // }
    // for(int i =0;i<10;i++){
    //     printf("%d ,",*arr +i);
    // }
    // int arr [10] ={1,2,3,4,5,6,7,8,9,10};
    // reverse(arr,10);
    // int arr [10] = {1,-2,-56,34,6,-98,45,-78,34,-68};
    // com(arr,10);
    // coma(arr,10);
    int mul [3][10];
    for(int i = 0;i<10;i++){
        mul[0][i] = 2*(i+1);
    }
    for(int i = 0;i<10;i++){
        mul[1][i] = 7*(i+1);
    }
    for(int i = 0;i<10;i++){
        mul[2][i] = 9*(i+1);
    }
    for(int i =0;i<3;i++){
        for(int j = 0;j<10;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}