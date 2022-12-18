#include <stdio.h>
#include <string.h>

int main () {

    char names[][5] = {"Nour","Ahmed","Ali","Mohamed","Osman"};
    // name[0] = "Nouradin";  // this will not work
    
    strcpy(names[0], "Nouradin"); // we need to use strcpy
    for (int i = 0; i < (sizeof(names) / sizeof(names[0])); i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}