#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm để tính bình phương của một con số

int fV4(int x);

int main(int argc, char *argv[]) {
	
	//int result = fV4(5);
	//printf("The result: %d\n", result);
	
	// Cách 1
	//printf("The result: %d\n", fV4());
	
	// Cách 2
	int n;
	printf("Please input a number to get ^2: ");
	scanf("%d", &n);
	
	// Số nguyên n sẽ được truyền vào trong hàm
	printf("The result: %d\n", fV4(n));
	
	return 0;
}

int fV4(int x)
{
//	int y = x * x;
//	return y;

	// Hai biến mang giá trị,
	// nếu nhân nhau thì vẫn thành giá trị
	return x * x;
}