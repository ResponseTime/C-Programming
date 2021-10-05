#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<time.h>
int main()
{
    int r, num,guess=0;
    srand(time(0));
    r = rand()%100+1;
    while (true)
    {
        printf("Enter the num\n");
        scanf("%d", &num);
        guess++;
        if (num == r)
        {
            printf("You have guessed the number its %d you guessed it in %d times\n", num,guess);
            break;
        }
        else if (num < r)
        {
            printf("Your number is lower than the actual number\n");
        }
        else if (num > r)
        {
            printf("Your number is greater than the actual number\n");
        }
        
       
    }
    scanf("%d");
    
    return 0;
}