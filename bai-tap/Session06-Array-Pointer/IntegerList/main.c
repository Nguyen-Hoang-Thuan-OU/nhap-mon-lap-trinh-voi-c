#include <stdio.h>
#include <stdlib.h>

// Đề bài: lưu và in ra một mảng gồm 10 con số nguyên bất kì

int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, -15, 20, -25};
	
	for (int i = 0; i < 5; i++)
		printf("The address of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	
	printf("\n");
	
	// Địa chỉ của các biến kiểu số nguyên cách nhau 4 Byte
	// Sử dụng phép tăng/giảm tự thân để di chuyển
	
	// Sử dụng biến con trỏ để trỏ vào đầu dãy
	// và lưu địa chỉ của phần từ đầu tiên trong mảng
	int* thuan = &a[0];
	
	
	// In lẻ từng giá trị của các phần tử trong mảng
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *thuan);
	
	printf("a[1] = %d\n", a[1]);
	printf("a[1] = %d\n", *(++thuan)); // thuan++
	
	printf("\n");
	
	// Cho biến con trỏ về lại đầu mảng
	thuan = &a[0];
	
	// In cả mảng
	printf("The array has values:\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(thuan + i)); // *(thuan++)
		// Biến con trỏ tăng lên (4 Byte) sau mỗi lần in
	
	return 0;
}