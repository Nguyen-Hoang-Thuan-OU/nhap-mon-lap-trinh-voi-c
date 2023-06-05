#include <stdio.h>
#include <stdlib.h>

// Đề bài: tìm giá trị lớn nhất trong ba số

int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	// Biến trung gian - phất cờ
	int max;
	
	printf("Find max between three numbers\n");
	
	printf("\n");
	
	printf("Please input three integers\n");
	printf("1st integer: ");
	scanf("%d", &a);
	
	printf("2nd integer: ");
	scanf("%d", &b);
	
	printf("3rd integer: ");
	scanf("%d", &c);
	
	printf("\n");
		
	// Có thể đúng hoặc sai khi khẳng định rằng max = a,
	max = a;
	
	// Nếu khẳng định sai thì sửa lại khẳng định ban đầu
	if (b > max)
		max = b;
		
	if (c > max)
		max = c;
		
	printf("Max number among three ones %d, %d & %d is: %d\n", a, b, c, max);
	
	return 0;
}