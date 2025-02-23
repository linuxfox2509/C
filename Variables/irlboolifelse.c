#include <stdio.h>
#include <stdbool.h>

int main() {
    int age1 = 25;
    int age2 = 16;
    int requiredage = 18;

    if (age1 >= requiredage) {
        printf("Old enough to vote\n");
    } else {
        printf("Not old enough to vote\n");
    }

    if (age2 >= requiredage) {
        printf("Old enough to vote\n");
    } else {
        printf("Not old enough to vote\n");
    }

}