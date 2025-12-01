#include <stdio.h>
#include <string.h>

int main() {
    char card[100];
    printf("Card number: ");
    fgets(card, sizeof(card), stdin);

    int len = strlen(card);
    int sum = 0;
    int pos = 0; 

    for (int i = len - 1; i >= 0; i--) {
        if (card[i] < '0' || card[i] > '9') continue; 

        pos++;
        int digit = card[i] - '0';

        if (pos % 2 == 0) { 
            digit *= 2;
            if (digit > 9) digit -= 9;
        }

        sum += digit;
    }

    if (sum % 10 == 0)
        printf("OK\n");
    else
        printf("FAIL (sum = %d)\n", sum);

    return 0;
}
