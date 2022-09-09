#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm hoán đổi hai giá trị
//			Ví dụ: a = 10, b = 100
//				-> a = 100, b = 10

void swapV1(int a, int b);

int main(int argc, char *argv[]) {
	
	int a = 10, b = 100;
	printf("In main(), before swapping, a = %d; b = %d\n", a, b);
	
	swapV1(a, b);
	printf("In main(), after swapping, a = %d; b = %d\n", a, b);
	
	return 0;
}

// Truyền tham trị: hoán đổi giá trị của hai biến a và b
// trong nội bộ của hàm, không làm ảnh hưởng đến bên ngoài
void swapV1(int a, int b) {
	printf("Before swapping, a = %d; b = %d\n", a, b);
	int t; // Biến trung gian để lưu lại giá trị cũ
	t = a; // trước khi tiến hành hoán đổi giá trị
	a = b;
	b = t;
	printf("After swapping, a = %d; b = %d\n", a, b);
}