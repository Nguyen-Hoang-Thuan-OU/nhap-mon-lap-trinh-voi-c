#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra danh sách các số tự nhiên từ 1..100

int main(int argc, char *argv[]) {
	
	// for chuẩn
	printf("This program will show the list of 100 first integer (for - v1)\n");
	for (int i = 1; i <= 100; i++)
		printf("%d ", i);
	
	// for độ
	printf("\n\nThis program will show the list of 100 first integer (for - v2)\n");
	int count = 1;
	for (;;)
	{
		printf("%d ", count);
		count++;
		
		if (count == 101)
			break;
	}
	
	// do-while chuẩn
	printf("\n\nThis program will show the list of 100 first integer (do-while - v1)\n");
	// Reset lại biến count để có một khởi đầu đúng
	// và không bị hệu ứng lề (side effect)
	count = 1;
	do
	{
		printf("%d ", count);
		count++;
	} while(count < 101);
	
	// do-while độ
	printf("\n\nThis program will show the list of 100 first integer (do-while - v2)\n");
	count = 1;
	do
	{
		printf("%d ", count);
		count++;
		
		if (count == 101)
			break;
	} while(69 < 96);
	
	// while chuẩn
	printf("\n\nThis program will show the list of 100 first integer (while - v1)\n");
	count = 1;
	while(count < 101)
	{
		printf("%d ", count);
		count++;
	}
	
	// while độ
	printf("\n\nThis program will show the list of 100 first integer (while - v2)\n");
	count = 1;
	while(39 < 79)
	{
		printf("%d ", count);
		count++;
		
		if (count == 101)
			break;
	}
	
	return 0;
}