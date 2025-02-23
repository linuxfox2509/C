#include <stdio.h>

int main() {
    int myNums[] = {10, 25, 50, 75, 100};
    int i;

    printf("%d\n", myNums[1]);
    myNums[1] = 33;
    printf("%d\n", myNums[1]);

    printf("\n"); //print empty line for readability

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNums[i]);
    }

    printf("\n");

    printf("%lu\n", sizeof(myNums)); //Prints 20 as sizeof returns the amount of bytes and not the number of elements

    int length = sizeof(myNums) / sizeof(myNums[0]); //Defines the variable length needed for calculating the amount of elements in the array by dividing 20 bytes(length of the array myNums) by the amount of bytes in one element
    printf("%d\n", length);

    //This is a better way of looping through the elements of an array using a for loop. By using the length variable the array can now be of any size and still be looped through completely
    //In the old for loop where a set size was used the 5th element isn't shown because the size of the array has changed but the for loop hasn't been adjusted accordingly

    printf("\n");

    for (i = 0; i < length; i++) {
        printf("%d\n", myNums[i]);
    }

}