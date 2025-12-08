#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[10][20];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 20; j++)
            A[i][j] = rand() % 100;

    printf("Before:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    for (int i = 0; i < 10; i += 2)
        for (int j = 0; j < 20; j++) {
            int t = A[i][j];
            A[i][j] = A[i+1][j];
            A[i+1][j] = t;
        }

    printf("\nAfter:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
}
