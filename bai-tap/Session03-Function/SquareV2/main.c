#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm để mô phỏng lại hàm toán học y = f(x) = x^2

// Hàm loại 1: KHÔNG ra, KHÔNG vào trên tên hàm
// void f()
void fV1();

// Hàm loại 2: KHÔNG ra, CÓ vào trên tên hàm
// void f(x)
void fV2(int x);

int main(int argc, char *argv[]) {

	// Gọi hàm lên để sử dụng
	
	
	// Sử dụng hàm loại 2
	// Cách 1: gán cứng giá trị
	// fV2(5);
	
	// Cách 2: nhập giá trị từ bàn phím, đến khi nào gặp 0 thì dừng
	int n;
	do
	{
		n = 0;
	
		printf("\nPlease input an integer to get a ^2: ");
		scanf("%d", &n);	// Đã có giá trị được nhập từ bàn phím
	
		fV2(n);
		
	} while (n != 0);
	
	return 0;
}


// Tạo ra hàm - Tạo ra quy tắc biến đổi

// Hàm loại 2
void fV2(int x)
{
	int y = x * x;
	
	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
}

// Hàm loại 1
void fV1()
{
	int x, y;
	
	printf("\nPlease input an integer to get a ^2: ");
	scanf("%d", &x);
	
	y = x * x;
	
	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
}
