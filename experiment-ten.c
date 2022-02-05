#include <stdio.h>
int main() {
    int i,j,h;
    int number [10];
    for(i =0; i <= 9; i++){
        printf("Enter a number: ");
        scanf("%d", &number[i]);
        h=number[0];
        for(j = 1; j <= i; j++){
            if(number[j] > h){
                h = number[j];
            }
        }
    }
    printf("The largest number is %d\n", h);
    return 0;
}
