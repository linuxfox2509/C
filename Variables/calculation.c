#include <stdio.h>

int main() {
    float wrongsum = 5 / 2;
    printf("%f\n", wrongsum);
    
    // Explicit conversion
    float correctsum = (float) 5 / 2;
    printf("%f\n", correctsum);
    printf("%.1f\n", correctsum);
}