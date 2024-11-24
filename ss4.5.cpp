#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Nh?p 3 s? nguyên
    printf("Nh?p vào s? th? nh?t: ");
    scanf("%d", &num1);

    printf("Nh?p vào s? th? hai: ");
    scanf("%d", &num2);

    printf("Nh?p vào s? th? ba: ");
    scanf("%d", &num3);

    // Ki?m tra xem num3 có n?m trong kho?ng gi?a num1 và num2 không
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("S? th? ba (%d) n?m trong kho?ng gi?a s? th? nh?t (%d) và s? th? hai (%d).\n", num3, num1, num2);
    } else {
        printf("S? th? ba (%d) không n?m trong kho?ng gi?a s? th? nh?t (%d) và s? th? hai (%d).\n", num3, num1, num2);
    }

    return 0;
}

