#include <stdio.h>

int main() {
    //Array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0; //Defining 2 floats for the average(avg) and the sum(used for calculating avg)
    int i;

    int length = sizeof(ages) / sizeof(ages[0]); //Get length of array

    //Add all elements of array ages to sum for calculating avg
    for (i = 0; i < length; i++) {
        sum += ages[i];
    }

    avg = sum / length; //Get average age by dividing sum by length

    printf("The average age is: %.2f\n", avg); //Print the average age with 2 digits of accuracy

    int lowestAge = ages[0]; //Create a variable for finding out the lowest age in the array

    for (i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }
    printf("The lowest age is: %d\n", lowestAge);

}