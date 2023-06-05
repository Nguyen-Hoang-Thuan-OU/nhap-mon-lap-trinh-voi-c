#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm tính n!

int getFactorialV4(int n);

int main(int argc, char *argv[]) {
	
	// Sử dụng hàm loại 4
	printf("0! = %d\n", getFactorialV4(0));
	
	printf("6! = %d\n", getFactorialV4(6));
	
	getFactorialVWrong(5);
	
	return 0;
}

// Hàm loại 4 - phong cách thiết kế sử dụng return sai cách
//				nhưng trong bài này vì vẫn chạy đúng
int getFactorialVWrong(int n) {
	int acc = 1;

	if (n == 0 || n == 1)
		acc = 1; // return 1;
	
	printf("CPU is still here, of n >= 2\n");
	
	// Nếu bên trên có return thì phần sau sẽ không chạy
	for (int i = 2; i <= n; i++)
		acc *= i;
			
	return acc;
}

// Hàm loại 4 - phong cách thiết kế sử dụng return để loại trừ
int getFactorialV4(int n) {
	int acc = 1;

	if (n == 0 || n == 1)
		return 1;
	
	// Khi đã có return thì phần sau không cần phải else
	for (int i = 2; i <= n; i++)
		acc *= i;
			
	return acc;
}

// Hàm loại 4 - phong cách thiết kế nhiều return
//int getFactorialV4(int n) {
//	int acc = 1;
//
//	if (n == 0 || n == 1)
//		// Nếu CPU chạm vào được return
//		// thì lập tức thoát chương trình
//		// mà không cần quan tâm phần còn lại
//		// và giá trị 1 sẽ được đẩy lên trên tên hàm
//		return 1;
//	else
//	{
//		for (int i = 2; i <= n; i++)
//			acc *= i;
//			
//		return acc;
//	}
//
//	// CPU sẽ không chạy đến đây
//	// do trước đó đã chạy vào return
//	printf("Cho anh gan em them chut nua\n");
//}

// Hàm loại 4 - phong cách thiết kế 1 return
//int getFactorialV4(int n) {
//	int acc = 1;
//
//	if (n == 0 || n == 1)
//		acc = 1;
//	else
//		for (int i = 2; i <= n; i++)
//			acc *= i;
//
//	return acc;
//}