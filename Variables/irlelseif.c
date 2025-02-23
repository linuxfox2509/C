#include <stdio.h>

int main() {
    int code = 2428;

    if (code == 2478) {
        printf("The code was correct!\nThe door is now open.\n");
    } else if (code == 8888) {
        printf("Eight\n");
    } else {
        printf("The code %d was incorrect!\nThe door remains closed.\n", code);
    }
}