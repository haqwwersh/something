#include <stdio.h>

int main() {
    float A[5][5] = {
        {1,2,3,4,5},
        {5,4,3,2,1},
        {2,4,6,8,10},
        {3,3,3,3,3},
        {9,1,2,3,4}
    };

    for (int i = 0; i < 5; i++) {
        float sum = 0;

        for (int j = 0; j < 5; j++)
            sum += A[i][j];

        for (int j = 0; j < 5; j++)
            A[i][j] /= sum;
    }

    printf("Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%8.3f", A[i][j]);
        printf("\n");
    }
}
