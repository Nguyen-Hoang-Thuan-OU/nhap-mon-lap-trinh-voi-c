#include <stdio.h>
#include <stdlib.h>

// Đề bài: khảo sát RAM được cấp cho mảng

int main(int argc, char *argv[]) {
	
	float col[10];
	
	// Hỏi địa chỉ của 10 phần tử mảng
	printf("The address of all if elements in the array:\n");
	for (int i = 0; i < 10; i++)
		printf("The address of col[%d] is %p\n", (i + 1), &col[i]);
	
	// Tên mảng cũng là một biến và có giá trị siêu đặc biệt
	// lưu địa chỉ của phần tử đầu tiên trong mảng
	printf("The value of col is %d\n", col);
	
	return 0;
}