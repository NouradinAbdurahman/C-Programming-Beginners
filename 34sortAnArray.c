#include <stdio.h>

int sort(char array[], int size);  // For Numbers
int printArray(char array[], int size); // For Latters

int main () {
    // int array[] = {9, 4, 6, 7, 2, 5, 8, 1, 0};  // For Numbers
    char array[] = {'F', 'D', 'B', 'A', 'C'}; // For Latters
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printArray(array, size);
    return 0;
}

int sort (char array[], int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return 0;
}

int printArray (char array[], int size) {

    for (int i = 0; i < size; i++) {
        // printf("%d ", array[i]);  // For Numbers
        printf("%c ", array[i]); // For Latters
    }
    printf("\n");
    return 0;
}

