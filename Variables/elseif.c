#include <stdio.h>

int main() {
    int time = 14;
    if (time < 10) {
        printf("Good morning!\n");
    } else if (time < 20) {
        printf("Good day!\n");
    } else {
        printf("Good evening!\n");
    }
}