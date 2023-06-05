#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm để mô phỏng lại hàm toán học y = f(x) = x^2
//			(viết hàm nhận vào một số nguyên
//			 và trả về bình phương của số đó)

// I: x
// P: x ^ 2
// O: in ra x ^ 2 -> gọi là y (y = x^2)


// Hàm loại 1: KHÔNG ra, KHÔNG vào trên tên hàm
// void f()
void fV1();

// Hàm loại 2: KHÔNG ra, CÓ vào trên tên hàm
// void f(x)
void fV2(int x);

int main(int argc, char *argv[]) {

	// Gọi hàm lên để sử dụng
	
	// Sử dụng hàm loại 1
//	fV1();
//	fV1();

//	for (int i = 1; i <= 5; i++)
//		fV1();


	// Sử dụng hàm loại 2
	fV2(5);
	fV2(-5);
	
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
