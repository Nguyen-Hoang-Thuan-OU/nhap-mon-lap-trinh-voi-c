#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra tổng của dãy số sau:
//						1! + 2! + 3! + 4! + 5!

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
//	int n;
//	printf("Please input : ");
//	scanf("%d", &n);
//	printf("%d! = %d\n", n, getFactorial(n));

//	getFactorial(5);

	// Bắt đầu tái sử dụng
	
	// Tính tổng: 1! + 2! + 3! + 4! + 5!
	//			  1    2    6   24   120
	//				 3    9  33   153
	
	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
	printf("The sum of factorial chain from 1! to 5! = %d\n", sum);
	
	return 0;
}

int getFactorial(int n) {

	int acc = 1;

	if (n == 0 || n == 1)
		return 1;

	for (int i = 2; i <= n; i++)
		acc *= i;
	
	// Không nên có câu lệnh in kết quả xử lý trong hàm có return
	// vì sẽ làm giảm tính tái sử dụng
	printf("Print inside a function %d! = %d\n", n, acc);
		
	return acc;
	
}

//int getFactorial(int n) {
//
//	int acc = 1;
//
//	if (n == 0 || n == 1)
//		return 1;
//
//	for (int i = 2; i <= n; i++)
//		acc *= i;
//
//	return acc;
//
//}