#include <stdio.h>

int main() {
    int number;

    // Y�u c?u ng�?i d�ng nh?p m?t s? nguy�n
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &number);

    // Ki?m tra s? ch?n hay l?
    if (number % 2 == 0) {
        printf("S? v?a nh?p l� s? ch?n.\n");
    } else {
        printf("S? v?a nh?p l� s? l?.\n");
    }

    return 0;
}

