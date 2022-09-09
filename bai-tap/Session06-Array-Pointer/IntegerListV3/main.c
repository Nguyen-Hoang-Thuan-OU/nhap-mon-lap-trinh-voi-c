#include <stdio.h>
#include <stdlib.h>

// 

int main(int argc, char *argv[]) {
	
	int a[5] = {5, -10, -15, 20, -25};
	
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d | address: %u\n", i, a[i], &a[i]);
	
	printf("\n");
	
	// Tên mảng là biến con trỏ
	// chứa địa chỉ của phần tử đầu tiên trong mảng
	//		-> a = &a[0];
	printf("a stores/holds the address: %u\n", a);
	printf("a[0] = %d\n", *a);
	printf("a[1] = %d\n", *(a + 1));
	
	printf("\n");
	
	// Sửa giá trị của mảng bằng tên mảng
	*(a + 1) = 69; // a[1] = 69;
	
	// In ra giá trị của phần tử a[1] sau khi đã chỉnh sửa
	printf("The array after 69\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d | address: %u\n", i, a[i], &a[i]);
	
	printf("\n");
	
	// Thử sử dụng phép tăng/giảm tự thân với tên mảng
	// dù biết nó luôn lưu địa chỉ của phần tử đầu tiên a[0]
	//a++;
	// Thông báo lỗi, vì tuy đây cũng là con trỏ
	// nhưng lại không được trỏ đến nơi khác
	// [Error] lvalue required as increment operand
	
	// Làm việc thử với biến con trỏ
	int* thuan;
	thuan = a; // thuan = &a[0];
	
	// In thử mảng thông qua biến con trỏ
	printf("The array has value (via thuan):\n");
	for (int i = 0; i < 5; i++)
		//printf("a[%d] = %4d | address: %u\n", i, *(a + i), (a + i));
		printf("a[%d] = %4d | address: %u\n", i, *(thuan + i), (thuan + i));
	
	return 0;
}