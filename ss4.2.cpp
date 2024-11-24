#include <stdio.h>

int main() {
    int number;

    // Yêu c?u ngý?i dùng nh?p m?t s? nguyên
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &number);

    // Ki?m tra s? ch?n hay l?
    if (number % 2 == 0) {
        printf("S? v?a nh?p là s? ch?n.\n");
    } else {
        printf("S? v?a nh?p là s? l?.\n");
    }

    return 0;
}

