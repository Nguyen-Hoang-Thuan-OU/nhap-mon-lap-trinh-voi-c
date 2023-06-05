#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra tổng của dãy số sau:
//						1! + 2! + 3! + 4! + 5! + ... + n!

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
	int sum = 0;
	
	int n;
	printf("Please input an integer (n >= 2) to get the sum of a factorial chain: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
		sum += getFactorial(i);
	
	printf("The sum of factorial chain from 1! to %d! = %d\n", n, sum);
	
	return 0;
}

int getFactorial(int n) {

	int acc = 1;

	if (n == 0 || n == 1)
		return 1;

	for (int i = 2; i <= n; i++)
		acc *= i;
		
	return acc;
	
}