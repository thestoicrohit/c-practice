#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    size_t len;
    if (fgets(name, sizeof(name), stdin) == NULL) return 0;
    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("\nGiven input is :- %s\n", name);
    for (size_t i = 0; i < len; i++) {
        printf("\t%c\n", name[i]);
    }
    printf("\nNumber of characters: %zu\n", len);
    return 0;
}
