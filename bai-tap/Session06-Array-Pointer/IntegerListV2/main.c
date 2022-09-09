#include <stdio.h>
#include <stdlib.h>

// Đề bài: lưu và in ra một mảng gồm 10 con số nguyên bất kì

int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, -15, 20, -25};
	
	for (int i = 0; i < 5; i++)
		printf("The address of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	
	printf("\n");
	
	// Tên mảng 'a' cũng được xem là một biến nhưng lưu địa chỉ
	// và trỏ đến phần từ đầu tiên a[0] trong mảng
	// Vì vậy, khi làm việc với mảng
	// có thể sử dụng tên mảng để thay cho biến con trỏ
	printf("a has value of %d\n", a);
	
	printf("\n");
	
	// In giá trị của các phần tử trong mảng
	
	// Sử dụng biến a[i]
	printf("The array has values:\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);
	
	printf("\n");
	
	// Sử dụng biến tên mảng (con trỏ)
	printf("The array has values:\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(a + i));
	
	return 0;
}