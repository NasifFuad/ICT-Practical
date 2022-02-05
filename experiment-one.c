#include <stdio.h>


int main(){

    int x, y, sum, avg;
    
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    sum = x+y;
    avg = sum/2;
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);

    return 0;
}