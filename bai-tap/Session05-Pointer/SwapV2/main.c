#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm hoán đổi hai giá trị
//			Ví dụ: a = 10, b = 100
//				-> a = 100, b = 10

//void swapV1(int a, int b); // Hàm nhận vào hai giá trị
void swapV2(int* a, int* b); // Hàm nhận vào hai địa chỉ

int main(int argc, char *argv[]) {
	
	int a = 10, b = 100;
	printf("In main(), before swapping, a = %d; b = %d\n", a, b);
	
	swapV2(&a, &b);
	printf("In main(), after swapping, a = %d; b = %d\n", a, b);
	
	return 0;
}

// Truyền tham chiếu: hoán đổi giá trị của hai biến a và b
// và trả về kết quả cho nơi gọi hàm - ở đây là hàm main()
void swapV2(int* a, int* b) {
	// *a và *b là giá trị của biến ở xa
	printf("Before swapping, a = %d; b = %d\n", *a, *b);
	int t;
	t = *a;
	*a = *b;
	*b = t;
	printf("After swapping, a = %d; b = %d\n", *a, *b);
}
