#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm tính n!

// I: n

// P: 1 * 2 * 3 * ... * n

// O: kết quả của thuật toán nhồi


// Viết thử bằng cả bốn loại hàm
// để kiểm tra xem loại nào là loại tốt nhất

void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n);

int main(int argc, char *argv[]) {
	
	// Sử dụng hàm loại 1
	//getFactorialV1();
	
	// Sử dụng hàm loại 2
	//getFactorialV2(6); //720
	
	// Sử dụng hàm loại 3
		// Cách 1
	//getFactorialV3();
	
		// Cách 2
//	int result = getFactorialV3();
//	printf("The result: %d\n", result);
	
		// Cách 3
	//printf("The result: %d\n", getFactorialV3());
	
	// Sử dụng hàm loại 4
	getFactorialV4(5); //120
	
	printf("The result: %d\n", getFactorialV4(5));
	
	return 0;
}

// Hàm loại 4
int getFactorialV4(int n) {
	int acc = 1;
	
	if (n == 0 || n == 1)
		acc = 1;
	else
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	return acc;
}

// Hàm loại 3
int getFactorialV3() {
	int n, acc = 1;
	
	printf("Please input a number (n >= 0) to get the factorial: ");
	scanf("%d", &n);
	
	if (n == 0 || n == 1)
		acc = 1;
	else
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	//return acc;	// Sử dụng return trước
	
	// Không nên sử dụng printf() để tăng tính tái sử dụng
	printf("%d! = %d\n", n, acc);
	
	return acc;	// Sử dụng return sau
}

// Hàm loại 2
void getFactorialV2(int n) {
	int acc = 1;
	
	if (n == 0 || n == 1)
		acc = 1;
	else
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	printf("%d! = %d\n", n, acc);
}

// Hàm loại 1
void getFactorialV1() {
	// Tổng cộng dồn bắt đầu bằng 0,
	// nhưng tích nhân dồn thì phải bắt đầu bằng 1
	int n, acc = 1;
	
	printf("Please input a number (n >= 0) to get the factorial: ");
	scanf("%d", &n);
	
	if (n == 0 || n == 1)
		acc = 1;
	else // tạm thời chưa chặn n < 0, xem như n đang < 1
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	printf("%d! = %d\n", n, acc);
}