#include <stdio.h>
long long jung(int n) {
    if (n < 0) {
        return -1; 
    }
    long long result = 1;
    int i; 
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    long long result = jung(num);
    if (result == -1) {
        printf("Khong the tinh ra giai thua cua so am \n");
    } else {
        printf("Giai thua cua %d la: %lld\n", num, result);
    }

    return 0;
}

