#include<stdio.h> 
int main() {
    int array[] = {7, 4, 6, 2, 1, 8}; 
    int size = sizeof(array) / sizeof(array[0]);
    int key, j;

    for (int i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
