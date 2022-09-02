#include <stdio.h>
#include <stdlib.h>

// Đề bài (bài lẻ): minh hoạ cách truyền giá trị đầu vào cho hàm

// y = f(x) = x^2

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	
	int x = 10;
	// Hỏi địa chỉ nhà của x main()
	printf("In main(), x address is %u and value is %d\n", &x, x);
	
	f(x);
	printf("In main(), after calling f(), x address is %u and value is %d\n", &x, x);
	
	return 0;
}

void f(int x) {
	printf("In f(), x address is %u and value is %d\n", &x, x);
	
	// Thử thay đổi giá trị của x thành 50
	// trong khi trước đó đang là 10
	x = 50;
	int y = x * x;
	printf("y = f(%d) = %d^2 = %d\n", x, x, y);
	printf("In f(), after updating x, x address is %u and value is %d\n", &x, x);
}