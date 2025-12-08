#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    char prefix[50];

    printf("Enter: ");
    fgets(text, 200, stdin);

    printf("Enter: ");
    fgets(prefix, 50, stdin);

    prefix[strcspn(prefix, "\n")] = 0;

    printf("Count:\n");

    char *word = strtok(text, ",");
    while (word != NULL) {
        while (*word == ' ') word++;

        if (strncmp(word, prefix, strlen(prefix)) == 0)
            printf("%s\n", word);

        word = strtok(NULL, ",");
    }

    return 0;
}
