#include <stdio.h>
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("moi nhap so thu nhat: ");
    scanf("%d", &num1);
    
    printf("moi nhap so thu hai: ");
    scanf("%d", &num2);
    int total = tinhTong(num1, num2);
    printf("Tong cua %d va %d la: %d\n", num1, num2, total);
    
    return 0;
}

