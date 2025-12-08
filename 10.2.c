#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    char words[50][50];
    int count[50] = {0};
    int n = 0;

    printf("Enter text: ");
    fgets(text, 200, stdin);

    text[strcspn(text, "\n")] = 0;

    char *word = strtok(text, ",");

    while (word != NULL) {

        while (*word == ' ') word++;

        int len = strlen(word);
        while (len > 0 && (word[len-1] == ' ')) {
            word[len-1] = 0;
            len--;
        }

        int found = -1;

        for (int i = 0; i < n; i++)
            if (strcmp(words[i], word) == 0)
                found = i;

        if (found == -1) {
            strcpy(words[n], word);
            count[n] = 1;
            n++;
        } else {
            count[found]++;
        }

        word = strtok(NULL, ",");
    }

    printf("\nCount:\n");
    for (int i = 0; i < n; i++)
        printf("%s – %d\n", words[i], count[i]);

    return 0;
}
