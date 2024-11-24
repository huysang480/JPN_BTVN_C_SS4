#include <stdio.h>

int main() {
    int number;

    // Yêu c?u ngý?i dùng nh?p m?t s? nguyên
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &number);

    // Ki?m tra s? âm hay dýõng
    if (number > 0) {
        printf("S? v?a nh?p là s? dýõng.\n");
    } else if (number < 0) {
        printf("S? v?a nh?p là s? âm.\n");
    } else {
        printf("S? v?a nh?p là s? 0.\n");
    }

    return 0;
}

