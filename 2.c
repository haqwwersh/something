#include <stdio.h>

int main() {
    int c;

    while (1) {
        printf("(-9 .. 9): ");
        scanf("%d", &c);

        if (c < -9 || c > 9) {
            printf("ERRROR -9 .. 9.\n");
            continue;
        }

        if (c < 0) printf("minus ");
        switch (c < 0 ? -c : c) {
            case 0: printf("zero\n"); break;
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
        }
        break;
    }

    return 0;
}
