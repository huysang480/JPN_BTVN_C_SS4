#include <stdio.h>

int main() {
    int month;

    // Yêu c?u ngý?i dùng nh?p s? tháng
    printf("Nh?p vào s? tháng (1-12): ");
    scanf("%d", &month);

    // Ki?m tra và in s? ngày c?a tháng
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Tháng %d có 31 ngày.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Tháng %d có 30 ngày.\n", month);
            break;
        case 2:
            printf("Tháng 2 có 28 ho?c 29 ngày (nãm nhu?n).\n");
            break;
        default:
            printf("S? tháng không h?p l?.\n");
            break;
    }

    return 0;
}

