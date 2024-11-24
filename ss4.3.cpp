#include <stdio.h>

int main() {
    int number;

    // Yêu c?u ngý?i dùng nh?p m?t s? nguyên
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &number);

    // Ki?m tra ði?u ki?n chia h?t
    if (number % 3 == 0 && number % 5 == 0) {
        printf("S? v?a nh?p chia h?t cho c? 3 và 5.\n");
    } else if (number % 3 == 0) {
        printf("S? v?a nh?p chia h?t cho 3.\n");
    } else if (number % 5 == 0) {
        printf("S? v?a nh?p chia h?t cho 5.\n");
    } else {
        printf("S? v?a nh?p không chia h?t cho 3 ho?c 5.\n");
    }

    return 0;
}

