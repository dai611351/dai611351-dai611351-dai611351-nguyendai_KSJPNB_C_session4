#include <stdio.h>
int main() {
	int soNguyen; 
	printf("Nhap vao mot so nguyen ");
	scanf("%d", &soNguyen);
	if (soNguyen % 3 == 0 && soNguyen % 5 == 0) {
		printf("Day la so chia het cho ca 3 va 5"); 
	}else if (soNguyen % 3 == 0)  {
		printf("Day la so chia het cho 3"); 
	} else if (soNguyen % 5 == 0) {
		printf("Day la so chia het cho 5"); 
	} else {
		printf("Day la so khong chia het duoc 3 va 5"); 
	} 
	return 0; 
} 
