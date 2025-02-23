#include <stdio.h>

int main() {
    char greetings[] = "Hello World";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]); //Only prints the first character of the string using the array index number(0) and the format specifier %c since it only prints a single character

    greetings[0] = 'J'; //Changes the first letter of the string from H to J
    printf("%s\n", greetings);

    char carName[] = "Porsche";
    int length = sizeof(carName) / sizeof(carName[0]); //Get length of array
    int i;

    for (i = 0; i < length; i++) {
        printf("%c\n", carName[i]);
    }
}