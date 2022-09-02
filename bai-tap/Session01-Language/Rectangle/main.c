#include <stdio.h>
#include <stdlib.h>

// Đề bài: tính diện tích hình chữ nhật với hai cạnh nhập từ bàn phím
// Công thức tính: S = dài * rộng

int main(int argc, char *argv[]) {
	
	// Tạm sử dụng số nguyên
	int width, length, area;
	
	printf("-----YOU'RE REQUIRED TO INPUT THE SIZE OF A RECTANGE-----\n");
	printf("Please input the width: ");
	scanf("%d", &width);
	
	printf("Please input the length: ");
	scanf("%d", &length);
	
	printf("\n");
	area = width * length;
	printf("The area of a rectangle (%d, %d) is: %d\n", width, length, area);
	
	return 0;
}