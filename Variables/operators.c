#include <stdio.h>

int main() {
    int sum = 100 + 50;
    int sum2 = sum + sum;
    int sum3 = sum * sum + sum - sum/2;

    printf("Sum 1: %i\n", sum);
    printf("Sum 2: %i\n", sum2);
    printf("Sum 3: %i\n", sum3);
}