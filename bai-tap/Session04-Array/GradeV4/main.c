#include <stdio.h>
#include <stdlib.h>

// Kỹ thuật vừa khai báo và vừa gán giá trị

int main(int argc, char *argv[]) {
	
	// Khai báo 10 phần tử và gán 6 giá trị
	// cho những phần tử đầu tiên của mảng (tính từ 0),
	// những phần tử còn lại mặc định sẽ là 0
	//	-> Giống như tập hợp/dãy số trong toán học
	float col[10] = {1, 1, 2, 3, 5, 8};
	
	printf("Your 10 grades:\n");
	for (int i = 0; i < 10; i++)
		printf("Grade [%d] = %.2f\n", (i + 1), col[i]);
	
	// Khai báo mà không nói rõ số phần tử cần cấp
	float c[] = {2, 4, 6, 8, 10};
	
	return 0;
}