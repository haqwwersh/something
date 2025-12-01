#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double a[20];
    int i;

    srand(time(NULL));

    for (i = 0; i < 20; i++) {
        a[i] = (rand() % 1001) / 100.0;
    }

    printf("array:\n");
    for (i = 0; i < 20; i++) {
        printf("%.2f ", a[i]);
    }

    printf("\n\n");

    for (i = 1; i < 19; i++) {  
        if (a[i] > a[i-1] && a[i] > a[i+1])
            printf("%.2f ", a[i]);
    }

    return 0;
}
