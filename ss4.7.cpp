#include <stdio.h>

#include <stdio.h>

int main() {
    int year;

    // Y�u c?u ng�?i d�ng nh?p v�o s? n�m
    printf("Nh?p v�o m?t n�m: ");
    scanf("%d", &year);

    // Ki?m tra n�m nhu?n
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("N�m %d l� n�m nhu?n.\n", year);
    } else {
        printf("N�m %d kh�ng ph?i l� n�m nhu?n.\n", year);
    }

    return 0;
}

