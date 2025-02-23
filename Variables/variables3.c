#include <stdio.h> 

int main() {
    int x = 7, y = 10, z = 19;
    printf("%d\n", x + y +z);
    x = y = z = 50;
    printf("%d\n", x);
    printf("%d\n", y + 2);
    printf("%d\n", z + 1);
}