#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Nh?p 3 s? nguy�n
    printf("Nh?p v�o s? th? nh?t: ");
    scanf("%d", &num1);

    printf("Nh?p v�o s? th? hai: ");
    scanf("%d", &num2);

    printf("Nh?p v�o s? th? ba: ");
    scanf("%d", &num3);

    // Ki?m tra xem num3 c� n?m trong kho?ng gi?a num1 v� num2 kh�ng
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("S? th? ba (%d) n?m trong kho?ng gi?a s? th? nh?t (%d) v� s? th? hai (%d).\n", num3, num1, num2);
    } else {
        printf("S? th? ba (%d) kh�ng n?m trong kho?ng gi?a s? th? nh?t (%d) v� s? th? hai (%d).\n", num3, num1, num2);
    }

    return 0;
}

