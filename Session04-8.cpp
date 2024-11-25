#include <stdio.h>

int main() {
    float a, b, c;
	printf("Nhap vao canh a: ");
    scanf("%f", &a);
    printf("Nhap vao canh b: ");
    scanf("%f", &b);
    printf("Nhap vao canh c: ");
    scanf("%f", &c);
	if (a <= 0 || b <= 0 || c <= 0) {
        printf("Không phai 3 canh tam giac\n");
    } else if (a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac\n");
    } else {
        printf("Khong phai 3 canh tam giac\n");
    } 
    return 0;
}

