#include <stdio.h>
int main() {
	int soNguyen; 
	printf("Nhap vao mot so nguyen ");
	scanf("%d", &soNguyen);
	if (soNguyen % 2 == 0) {
		printf("Day la so chan"); 
	}else {
		printf("Day la so le"); 
	} 
	return 0; 
} 
