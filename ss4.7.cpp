#include <stdio.h>

#include <stdio.h>

int main() {
    int year;

    // Yêu c?u ngý?i dùng nh?p vào s? nãm
    printf("Nh?p vào m?t nãm: ");
    scanf("%d", &year);

    // Ki?m tra nãm nhu?n
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nãm %d là nãm nhu?n.\n", year);
    } else {
        printf("Nãm %d không ph?i là nãm nhu?n.\n", year);
    }

    return 0;
}

