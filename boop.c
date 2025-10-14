#include <stdio.h>
#include <math.h>


int main() {
    
    int y = 2;
    int z = 4;
    
    float t = 5/ (1 + pow(y, 2));
    float x = 2 * y + 3 * ((exp(t) - exp(-t)) / 2) - z;
    printf("%.2f\n", x);

}