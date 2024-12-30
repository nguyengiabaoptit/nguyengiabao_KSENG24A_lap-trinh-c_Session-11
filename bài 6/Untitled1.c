#include <stdio.h>
#include <stdbool.h>
bool kiemTraSoHoanHao(int n) {
    if (n <= 0) return false; 

    int totalUoc = 0;
    int i;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            totalUoc += i;
        }
    }

    return totalUoc == n; 
}

int main() {
    int num1, num2;
    printf("moi nhap vao so nguyen thu nhat: ");
    scanf("%d", &num1);

    printf("moi nhap vao so nguyen thu hai: ");
    scanf("%d", &num2);
    if (kiemTraSoHoanHao(num1)) {
        printf("%d la so hoan hao \n", num1);
    } else {
        printf("%d khong phai la so hoan hao \n", num1);
    }

    if (kiemTraSoHoanHao(num2)) {
        printf("%d la so hoan hao \n", num2);
    } else {
        printf("%d khong la so hoan hao \n", num2);
    }

    return 0;
}

