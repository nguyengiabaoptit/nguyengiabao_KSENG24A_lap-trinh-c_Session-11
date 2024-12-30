#include <stdio.h>
#include <stdbool.h>
bool isPrime(int number) {
    if (number<= 1) return false; 
    int i;
    for (i = 2; i * i <= number; i++) { 
        if (number % i == 0) return false; 
    }
    return true;
}

int main() {
    int number1, number2;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &number1);

    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &number2);
    if (isPrime(number1)) {
        printf("%d la so nguyen to \n", number1);
    } else {
        printf("%d khong phai la so nguyen to \n", number1);
    }
    if (isPrime(number2)) {
        printf("%d la so nguyen to\n", number2);
    } else {
        printf("%d khong phai la so nguyen to\n", number2);
    }

    return 0;
}

