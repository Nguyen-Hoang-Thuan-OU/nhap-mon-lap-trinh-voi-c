#include <stdio.h>
#include <stdlib.h>

// Đề bài: tính tổng của dãy số nguyên từ 1..n (điều kiện n > 1)

int main(int argc, char *argv[]) {
	
	int n, acc = 0; // acc = accumulation: cộng dồn, tích luỹ...
	
	printf("-----This program will show the accumulation-----\n");
	printf("This program will show the sum of n first integers (1..n)\n");
	
	printf("\n");
	
	// Data Validation - đảm bảo tính hợp lệ của dữ liệu nhập vào
	for (;;)
	{
		printf("Please input a positive integer n (n > 1): ");
		scanf("%d", &n);
		
		printf("\n");
		
		if (n <= 1)
		{
			printf("Please input an integer > 1\n");
			printf("\n");
		}
		else
			break;
	}
	
	for (int i = 1; i <= n; i++)
			acc = acc + i;
			
	printf("The sum of integer list form 1 to %d is: %d\n", n, acc);
	
	return 0;
}