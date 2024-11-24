#include <stdio.h>

// H�m t�nh ti?n �i?n
double tinhTienDien(int chiSoCu, int chiSoMoi) {
    int soDien = chiSoMoi - chiSoCu;
    double tongTien = 0;

    if (soDien < 0) {
        printf("L?i: Ch? s? m?i kh�ng ��?c nh? h�n ch? s? c?.\n");
        return -1;
    }

    // T�nh ti?n �i?n theo t?ng b?c
    if (soDien > 200) {
        tongTien += (soDien - 200) * 30000;
        soDien = 200;
    }
    if (soDien > 150) {
        tongTien += (soDien - 150) * 25000;
        soDien = 150;
    }
    if (soDien > 100) {
        tongTien += (soDien - 100) * 20000;
        soDien = 100;
    }
    if (soDien > 50) {
        tongTien += (soDien - 50) * 15000;
        soDien = 50;
    }
    tongTien += soDien * 10000;

    return tongTien;
}

int main() {
    int chiSoCu, chiSoMoi;
    printf("Nh?p ch? s? c?: ");
    scanf("%d", &chiSoCu);
    printf("Nh?p ch? s? m?i: ");
    scanf("%d", &chiSoMoi);

    double tienDien = tinhTienDien(chiSoCu, chiSoMoi);

    if (tienDien >= 0) {
        printf("Ti?n �i?n ph?i tr? l�: %.2f VND\n", tienDien);
    }

    return 0;
}
 
