#include <stdio.h>

int main() {
    // WRITE/APPEND A FILE
    FILE *pF = fopen("45test.txt", "w"); // writing
    // FILE *pF = fopen("45test.txt", "a"); // appending

    fprintf(pF, "Spongebob Squarepants\n");

    fclose(pF);

    // DELETE A FILE
    
    // if(remove("45test.txt") == 0)
    // {
    //    printf("That file was deleted successfully!\n");
    // }
    // else
    // {
    //    printf("That file was NOT deleted!\n");
    // }
    
    return 0;
}