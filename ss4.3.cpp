#include <stdio.h>

int main() {
    int number;

    // Y�u c?u ng�?i d�ng nh?p m?t s? nguy�n
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &number);

    // Ki?m tra �i?u ki?n chia h?t
    if (number % 3 == 0 && number % 5 == 0) {
        printf("S? v?a nh?p chia h?t cho c? 3 v� 5.\n");
    } else if (number % 3 == 0) {
        printf("S? v?a nh?p chia h?t cho 3.\n");
    } else if (number % 5 == 0) {
        printf("S? v?a nh?p chia h?t cho 5.\n");
    } else {
        printf("S? v?a nh?p kh�ng chia h?t cho 3 ho?c 5.\n");
    }

    return 0;
}

