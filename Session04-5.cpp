#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi, soDien;
    long long tienDien = 0;
    printf("Nhap chi so dau thang ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so cuoi thang ");
    scanf("%d", &chiSoMoi);
    if (chiSoMoi < chiSoCu || chiSoCu < 0) {
        printf("Chi so không hop le \n");
        return 1;
    }
    soDien = chiSoMoi - chiSoCu;
    if (soDien <= 50) {
        tienDien = soDien * 10000;
    } else if (soDien <= 100) {
        tienDien = 50 * 10000 + (soDien - 50) * 15000;
    } else if (soDien <= 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    } else if (soDien <= 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
    }
    printf("So dien tieu thu trong tháng la %d kWh.\n", soDien);
    printf("So tien di?n phai tra la %lld VND.\n", tienDien);

    return 0;
}

