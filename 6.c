#include <stdio.h>
#include <math.h>


int main() {
    
    int z = 1;
    int t = 2;
    
    float y = tan(t) + z;
    float x = (8 * pow(z, 2) + 1)/(y * exp(t) + pow(t, 2));
    printf("%.2f\n", x);

}