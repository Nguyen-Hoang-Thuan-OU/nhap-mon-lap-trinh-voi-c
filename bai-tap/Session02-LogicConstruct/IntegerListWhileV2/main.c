#include <stdio.h>
#include <stdlib.h>

// Đề bài: tính tổng các số từ 1..100

int main(int argc, char *argv[]) {
	
	int count, acc = 0;
	
	printf("This program will compute the sum of 100 first integer\n");
	
	// for	
	for (int i = 1; i <= 100; i++)
		acc += i;
	printf("The sum is (for): %d\n", acc);
	
	// do-while
	count = 1;
	acc = 0;
	do
	{
		acc += count;
		count++;
	} while (count <= 100);
	printf("The sum is (do-while): %d\n", acc);
	
	//  while
	count = 1;
	acc = 0;
	while (count <= 100)
	{
		acc += count;
		count++;
	}
	printf("The sum is (while): %d\n", acc);
		
	return 0;  
}