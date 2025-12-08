#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float A[20], B[20];
    int k = 0;

    srand(time(NULL));

    printf("A:\n");
    for (int i = 0; i < 20; i++) {
        A[i] = (rand() % 2001) / 100.0f - 10;
        printf("%.2f ", A[i]);

        if (A[i] > 0)
            B[k++] = A[i];
    }

    printf("\nB+:\n");
    for (int i = 0; i < k; i++)
        printf("%.2f ", B[i]);

    return 0;
}
