int main() {
    float a, b, c;

    // Yêu c?u ngý?i dùng nh?p vào 3 c?nh c?a tam giác
    printf("Nh?p vào c?nh th? nh?t: ");
    scanf("%f", &a);

    printf("Nh?p vào c?nh th? hai: ");
    scanf("%f", &b);

    printf("Nh?p vào c?nh th? ba: ");
    scanf("%f", &c);

    // Ki?m tra tính h?p l? c?a 3 c?nh
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Là 3 c?nh tam giác.\n");
    } else {
        printf("Không ph?i 3 c?nh tam giác.\n");
    }

    return 0;
}

