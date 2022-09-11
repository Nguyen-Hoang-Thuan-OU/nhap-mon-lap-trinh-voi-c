#include <stdio.h>
#include <stdlib.h>

// Hàm in ra một mảng các số nguyên
// bằng mảng tĩnh
void printArray();

// Hàm in ra một mảng các số nguyên
// bằng mảng động
void printArrayHEAP();

// Nhập một mảng từ bàn phím
// với kích thước cố định
void inputArray();

// Nhập một mảng từ bàn phím
// với kích thước tuỳ chỉnh
void inputArrayV2();

// Nhập một mảng từ bàn phím
// bằng mảng động
void inputArrayHEAP();

int main(int argc, char *argv[]) {
	
	//printArray();
	
	//printArrayHEAP();
	
	//inputArray();
	
	//inputArrayV2();
	
	inputArrayHEAP();
	
	return 0;
}

// In mảng động
void inputArrayHEAP() {
	int n;
	printf("How manny numbers do you want to input (HEAP)?: ");
	scanf("%d", &n);
	
	// Cấp một số Byte là bội của 4 vì đây là số nguyên
	int* thuan = malloc(n * 4);
	// Đến đây thì mảng đã có n phần tử
	
	printf("\nYou are required to input %d numbers\n", n);
	for (int i = 0; i < n; i++) {
		printf("input a[%d]: ", (i + 1));
		scanf("%d", (thuan + i));
	}
	
	printf("\n");
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++)
		printf("%d\t", thuan[i]);
	
	printf("\n");
	
	// Dọn dẹp vùng RAM đã cấp phát động
	free(thuan);
}

// In mảng với kích thước tuỳ chỉnh
void inputArrayV2() {
	// Mời nhập một mảng từ bàn phím,
	// kích thước sẽ được khai báo sau
	int n;
	printf("How manny numbers do you want to input?: ");
	scanf("%d", &n);
	
	// Tuỳ theo con số n được nhập vào
	// mà mảng sẽ có bấy nhiêu phần tử
	int a[n];
	
	printf("\nYou are required to input %d numbers\n", n);
	for (int i = 0; i < n; i++) {
		printf("input a[%d]: ", (i + 1));
		scanf("%d", (a + i));
	}
	
	printf("\n");
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++)
		printf("%d\t", a[i]);
	
	printf("\n");
}

// In mảng với kích thước cố định
void inputArray() {
	// Khai báo trước một mảng với 50 phần tử,
	// nhưng không gán sẵn giá trị
	int a[50];
	
	// Khai báo 50 nhưng chỉ nhập vào 10 phần tử
	printf("You are required to input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("input a[%d]: ", (i + 1));
		scanf("%d", &a[i]);
		
		// Gửi địa chỉ cho hàm scanf()
		// theo phong cách con trỏ
		//scanf("%d", (a + i));
	}
	
	printf("\n");
	
	// In ra mảng đã nhập
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	
	printf("\n");
}

// Sử dụng Heap
void printArrayHEAP() {
	
	// Con trỏ thuần, trỏ đến địa chỉ của một biến
	// hoặc trỏ đến phần từ đầu tiên trong mảng
	int* thuan; // Biến "thuan" sẽ nằm trong Stack
	thuan = malloc(20); // Vùng 20 Byte lại nằm trong Heap
	// Xin 5 biến * 4 Byte = 20 Byte
	
	thuan[0] = 5;
	thuan[1] = -10;
	thuan[2] = 15;
	thuan[3] = -20;
	thuan[4] = 25;
	
	printf("The array has values of (dynamic array):\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", *(thuan + i)); // thuan[i]
		
	printf("\n");
	
	// Vì biến "thuan" được khai báo trong hàm
	// nên nó sẽ nằm ở trong Stack,
	// nhưng lại có câu lệnh xin cấp phát vùng nhớ động
	// nên sẽ có một vùng RAM (dạng mảng) trong Heap
	// và vùng này không thuộc sự quản lý của hệ điều hành
	// nên hệ điều hành không thể tự giải phóng
	// Vì vậy, sau khi sử dụng xong
	// thì phải có câu lệnh giải phóng vùng RAM
	// để trả lại bộ nhớ cho hệ điều hành
	free(thuan);
}

// Sử dụng Stack
void printArray() {
	int a[] = {5, -10, 15, -20, 25};
	
	// Sử dụng mảng
	printf("The array has values of (using [i])\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", a[i]);
		
	printf("\n");
	
	// Sử dụng tên mảng
	printf("The array has values of (using *a)\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", *(a + i));
		
	printf("\n\n");
	
	int* p;
	p = a; // p = &a[0];
	
	// Kiểm tra địa chỉ của con trỏ p
	// trước khi sử dụng phép tăng tự thân
	printf("Checking the address\n");
	printf("The address of all variables in the array:\n");
	for (int i = 0; i < 5; i++)
		printf("Address of a[%d]: %u\n", i, &a[i]);
	
	printf("\np points to %u\n\n", p);
	
	
	// Sử dụng con trỏ thuần
	printf("The array has values of (using *p - v1)\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", *(p + i));
		
	printf("\n");
	
	printf("The array has values of (using *p - v2)\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", p[i]);
		
	printf("\n");
	
	printf("The array has values of (using *p - v3)\n");
	for (int i = 0; i < 5; i++) {
//		printf("%d\t", *p); // p -> a[0]
//		p++;				// p -> a[1]
		
		printf("%d\t", *(p++));
	}
		
	printf("\n");
	
	
	// Kiểm tra lại địa chỉ của p
	// sau khi đã sử dụng phép tăng tự thân
	printf("\nFinally, p points to %u\n", p);
		
	printf("\n");
}