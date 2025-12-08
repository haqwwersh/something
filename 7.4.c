#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
            if (a[j] > a[j+1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
}

int main() {
    int C[20], D[20], E[40];
    int i = 0, j = 0, k = 0;

    srand(time(NULL));

    for (int x = 0; x < 20; x++) C[x] = rand() % 21;
    for (int x = 0; x < 20; x++) D[x] = rand() % 21;

    printf("C:\n");
    for (int x = 0; x < 20; x++)
        printf("%d ", C[x]);
    printf("\n");

    printf("D:\n");
    for (int x = 0; x < 20; x++)
        printf("%d ", D[x]);
    printf("\n");

    sort(C, 20);
    sort(D, 20);

    while (i < 20 && j < 20) {
        if (C[i] < D[j]) E[k++] = C[i++];
        else E[k++] = D[j++];
    }

    while (i < 20) E[k++] = C[i++];
    while (j < 20) E[k++] = D[j++];

    printf("E:\n");
    for (int x = 0; x < 40; x++)
        printf("%d ", E[x]);

    return 0;
}
