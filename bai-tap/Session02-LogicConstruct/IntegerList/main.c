#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra các con số từ 1 đến 100

int main(int argc, char *argv[]) {
	
	printf("The list of integers from 1..100\n");
	
	for (int i = 1; i <= 100; i++)
	{
		if (i < 100)
			printf("%d, ", i);
		else
			printf("%d", i);
	}
	
	return 0;
}