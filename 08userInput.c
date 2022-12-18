#include <stdio.h>
#include <string.h>
int main () {
    char name[25]; // bytes
    int age;

    printf("What's your name? ");
    // scanf("%s", &name); // scanf can't read the white spaces.
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?\n", name);
    printf("You are %d years old.\n", age);
    return 0;
}