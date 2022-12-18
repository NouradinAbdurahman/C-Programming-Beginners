#include <stdio.h>

int main() {
    FILE *pF = fopen("46poem.txt", "r");
    char buffer[255];

    if (pF == NULL) {
        printf("Unable to open file!\n");
    }
    else {
        while (fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
    }
    puts(" ");
    fclose(pF);

    return 0;
}