int main() {
    float a, b, c;

    // Y�u c?u ng�?i d�ng nh?p v�o 3 c?nh c?a tam gi�c
    printf("Nh?p v�o c?nh th? nh?t: ");
    scanf("%f", &a);

    printf("Nh?p v�o c?nh th? hai: ");
    scanf("%f", &b);

    printf("Nh?p v�o c?nh th? ba: ");
    scanf("%f", &c);

    // Ki?m tra t�nh h?p l? c?a 3 c?nh
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("L� 3 c?nh tam gi�c.\n");
    } else {
        printf("Kh�ng ph?i 3 c?nh tam gi�c.\n");
    }

    return 0;
}

