#include <stdio.h>

int main() {
    int M;
    
    while (1) {
        printf("1-12: ");
        scanf("%d", &M);

        if (M < 1 || M > 12) {
            printf("1–12\n");
            continue;
        }

        switch (M) {
            case 12: case 1: case 2:
                printf("Winter\n");
                break;
            case 3: case 4: case 5:
                printf("Spring\n");
                break;
            case 6: case 7: case 8:
                printf("Summer\n");
                break;
            case 9: case 10: case 11:
                printf("Autumn\n");
                break;
        }

        switch ((M - 1) / 3 + 1) {
            case 1: printf("1 quarter\n"); break;
            case 2: printf("2 quarter\n"); break;
            case 3: printf("3 quarter\n"); break;
            case 4: printf("4 quarter\n"); break;
        }
        break;
    }

    return 0;
}
