#include <stdio.h>

int main() {
    int number;

    // Y�u c?u ng�?i d�ng nh?p m?t s? nguy�n
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &number);

    // Ki?m tra s? �m hay d��ng
    if (number > 0) {
        printf("S? v?a nh?p l� s? d��ng.\n");
    } else if (number < 0) {
        printf("S? v?a nh?p l� s? �m.\n");
    } else {
        printf("S? v?a nh?p l� s? 0.\n");
    }

    return 0;
}

