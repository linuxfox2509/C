#include <stdio.h>

int main() {
    const float PI = 3.1419;
    const int minutesperhour = 60;

    // good practice to declare const in UPPERCASE
    const int BIRTHYEAR = 2008;
    printf("%f\n", PI);
    printf("%i\n", minutesperhour);
    printf("%i\n", BIRTHYEAR);
}