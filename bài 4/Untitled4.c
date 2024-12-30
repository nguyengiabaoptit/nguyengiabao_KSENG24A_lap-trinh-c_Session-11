#include <stdio.h>
int fileMax(int arr[], int size) {
    if (size <= 0) {
        printf("Mang khong hop le roi \n");
        return -1;
    }

    int max = arr[0];
    int i; 
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = fileMax(arr, size);

    if (max != -1) {
        printf("So lon nhat trong mang la: %d\n", max);
    }

    return 0;
}

