#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm tính bình phương của một số nguyên

int fV3();
void fV1();

int main(int argc, char *argv[]) {
	
	// Cách 1: chưa có câu lệnh in ra giá trị
	//fV3();
	
	// Cách 2: xem hàm là một giá trị và gán cho biến
	//int result = fV3();
	//printf("The result: %d\n", result);
	
	// Cách 3: sử dụng trực tiếp hàm như một giá trị
	printf("The result: %d\n", fV3());
	
//	fV1();
//	printf("The result: \n", fV1());
	
	return 0;
}

void fV1()
{
	printf("Nothing to lose, i like to play my own game\n");
}

// Hàm loại 3 - phiên bản chuẩn
int fV3()
{
	int x, y;
	
	printf("Please input an integer to get ^2: ");
	scanf("%d", &x);
	
	y = x * x;
	// printf("The funcion y = f(x) = x^2; f(%d) = %d\n", x, y);

	return y;	// biến y = tên hàm
				// int y = int fV3()
}

// Hàm loại 3 - phiên bản chưa chuẩn
// vì hàm đã có return thì không nên sử dụng printf()
// để in kết quả xử lý
//int fV3()
//{
//	int x, y;
//
//	printf("Please input an integer to get ^2: ");
//	scanf("%d", &x);
//
//	y = x * x;
//	printf("The funcion y = f(x) = x^2; f(%d) = %d\n", x, y);
//}