#include <stdio.h>
int main() {
    int n, i, sum = 0;

    for (i = 1; i <= 15; ++i) {
        sum += i;
    }

    printf("Sum of all number from 1 to 15 is = %d", sum);
    return 0;
}
