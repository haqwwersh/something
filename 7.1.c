#include <stdio.h>

int main() {
    int S = 0;
    for (int i = 1; i <= 117; i++) {
        S += i;
    }
    printf("S = %d\n", S);
    return 0;
}
