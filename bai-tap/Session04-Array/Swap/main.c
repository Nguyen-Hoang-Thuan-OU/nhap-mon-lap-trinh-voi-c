#include <stdio.h>
#include <stdlib.h>

// Đề bài: hoán đổi giá trị của hai biến cho nhau

int main(int argc, char *argv[]) {
	
	int a = 2400000;
	int b = 100;
	printf("Before swaping: a = %d / b = %d\n", a, b);
	
	a = b;
	b = a;
	printf("After swaping: a = %d / b = %d\n", a, b);
	// Giá trị cũ của a sẽ bị mất đi
	
	return 0;
}