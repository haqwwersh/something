#include <stdio.h>
#include <math.h>


int main() {
    
    int y = 2;
    int z = 4;
    
    float t = sin(2 + z);
    float x = 6 * pow(t, 2) - (1/tan(z) + 1) / pow(y,2);
    printf("%.4f\n", x);

}