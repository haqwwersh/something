#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int magic(int A[3][3]) {
    int s = A[0][0] + A[0][1] + A[0][2];

    for (int i = 0; i < 3; i++)
        if (A[i][0] + A[i][1] + A[i][2] != s) return 0;

    for (int j = 0; j < 3; j++)
        if (A[0][j] + A[1][j] + A[2][j] != s) return 0;

    if (A[0][0] + A[1][1] + A[2][2] != s) return 0;
    if (A[0][2] + A[1][1] + A[2][0] != s) return 0;

    return 1;
}

int main() {
    int A[3][3];
    long long attempts = 0;
    srand(time(NULL));

    do {
        attempts++;

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                A[i][j] = rand() % 10;

    } while (!magic(A));

    printf("%lld attemps\n", attempts);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
}
