#include <stdio.h>
void printArray(int array[], int size) {
	int i; 
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);

    return 0;
}

