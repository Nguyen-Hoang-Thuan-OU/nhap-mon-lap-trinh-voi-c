#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra các số tự nhiên từ 1..n (n > 1)

// I: nhập n trước tiên
// P: sử dụng for và if đến n
// O: in ra các số tự nhiên từ 1..n

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("I'm here to show the list of numbers from 1 to n (n > 1)\n");
	printf("Please input n > 1: ");
	scanf("%d", &n);
	
	printf("\n");
	
	if (n <= 1)
		printf("Please input a number > 1");
	else
	{
		printf("Again, the list of numbers from 1 to %d:\n", n);
		for (int i = 1; i <= n; i++)
			printf("%d ", i);
	}
	
	return 0;
}