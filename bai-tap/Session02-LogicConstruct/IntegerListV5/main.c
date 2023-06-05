#include <stdio.h>
#include <stdlib.h>

// Vòng lặp vô cực/vô tận
// Đề bài: in các số tự nhiên từ 1..100

int main(int argc, char *argv[]) {
	
	printf("The list of numbers from 1 to 100\n");
	
	// Vòng lặp vô cực/vô tận
	// vì điều kiện dừng lặp mãi mãi đúng
	for (int i = 1; i <= i; i++)
		printf("%d ", i);
	
	return 0;
}