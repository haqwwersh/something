#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[15];

    srand(time(NULL));

    printf("A:\n");
    for (int i = 0; i < 15; i++) {
        A[i] = rand() % 11;
        printf("%d ", A[i]);
    }

    printf("\nRepeat:\n");
    for (int i = 0; i < 15; i++) {
        int repeat = 0;
        for (int j = 0; j < i; j++)
            if (A[i] == A[j])
                repeat = 1;
        if (!repeat)
            printf("%d ", A[i]);
    }

    return 0;
}
