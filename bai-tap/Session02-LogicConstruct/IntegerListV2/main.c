#include <stdio.h>
#include <stdlib.h>

// Đề bài: in ra các số chẵn từ 1..100

// I: các số từ 1..100 (ví dụ: 2, 4, 6, 8...)
// P: lọc ra được những số chẵn
// O: in ra các số chẵn

int main(int argc, char *argv[]) {
	
	printf("The list of even numbers from 1..100\n");
	
//	for (int i = 2; i <= 100; i += 2)
//		if (i < 100)
//			printf("%d, ", i);
//		else
//			printf("%d", i);
			
	printf("\n");
	
	for (int i = 1; i <= 100; i++)
		// Số chẵn là số chia hết cho 2 và dư 0 (bội số của 2)
		if (i % 2 == 0)
			if (i < 100)
				printf("%d, ", i);
			else
				printf("%d", i);
	
	return 0;
}