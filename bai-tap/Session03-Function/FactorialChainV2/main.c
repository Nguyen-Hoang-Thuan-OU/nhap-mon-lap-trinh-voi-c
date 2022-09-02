#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra tổng của dãy số sau:
//						1! + 2! + 3! + 4! + 5!

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
	int sum = 0;
	
	for (int i = 1; i <= 5; i++)
		// Các số 1, 2, 3, 4, 5 là đầu vào của hàm giai thừa,
		// chỉ quan tâm khi đưa x vào thì nhận về x!,
		// tương tự với khi đưa biến i của hàm for
		sum += getFactorial(i);
	
//	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
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
	//printf("Print inside a function %d! = %d\n", n, acc);
		
	return acc;
	
}