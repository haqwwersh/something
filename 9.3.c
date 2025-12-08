#include <stdio.h>

int main() {
    int A[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    printf("Before:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
        for (int j = i+1; j < 5; j++) {
            int t = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = t;
        }

    printf("\nAfter:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
}
