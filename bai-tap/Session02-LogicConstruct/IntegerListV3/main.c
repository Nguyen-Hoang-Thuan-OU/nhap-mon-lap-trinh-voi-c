#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra các số lẻ từ 1..1000

// I: các số từ 1..1000
// P: lọc ra được những số lẻ
// O: in ra các số lẻ

int main(int argc, char *argv[]) {
	
	printf("The list of even numbers from 1..100\n");
	
//	for (int i = 1; i <= 1000; i += 2)
//		if (i < 999)
//			printf("%d, ", i);
//		else
//			printf("%d", i);
			
	printf("\n");
	
	for (int i = 1; i <= 1000; i++)
		// Số lẻ là số chia hết cho 2 nhưng dư 1
		if (i % 2 == 1) // if (i % 2 != 0)
			if (i < 999)
				printf("%d, ", i);
			else
				printf("%d", i);
	
	return 0;
}