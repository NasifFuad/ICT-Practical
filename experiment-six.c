#include <stdio.h>
int main() {
    double a, b, c;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("Enter the third number: ");
    scanf("%lf", &c);
    // if a is greater than both b and c, a is the largest
    if (a >= b && a >= c)
        printf("The first number is the largest number.", a);

    // if b is greater than both a and c, b is the largest
    if (b >= a && b >= c)
        printf("The second number is the largest number.", b);

    // if c is greater than both a and b, c is the largest
    if (c >= a && c >= b)
        printf("The third number is the largest number.", c);

    return 0;
}