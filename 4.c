#include <stdio.h>

int main() {
    int M, D, T = 0;
    int days;

    while (1) {
        printf("(1-12): ");
        scanf("%d", &M);
        printf("(1-31): ");
        scanf("%d", &D);

        if (M < 1 || M > 12 || D < 1 || D > 31) {
            printf("ERROR\n");
            continue;
        }

        switch (M) {
            case 4: case 6: case 9: case 11:
                if (D > 30) { printf("max 30\n"); continue; }
                break;
            case 2:
                if (D > 29) { printf("max 29\n"); continue; }
                break;
        }

        for (int i = 1; i < M; i++) {
            switch (i) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: days = 31; break;
                case 4: case 6: case 9: case 11: days = 30; break;
                case 2: days = 28; break;
            }
            T += days;
        }

        T += D;
        break;
    }

    printf("%d\n", T);

    return 0;
}
