#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập hai số từ bàn phím
//		   và in ra số lớn nhất trong hai số vừa nhập

// I: hai con số -> hai biến nguyên
// P: so sánh giữa hai con số và tìm ra số lớn nhất:
//													a > b -> a là max
//													a = b -> a bằng b
//													a < b -> b là max
// O: in ra số lớn nhất trong hai số

int main(int argc, char *argv[]) {
	
	int a, b;
	printf("This program will show the maximum value of two numbers\n");
	
	printf("\n");
	
	printf("Please input two integers\n");
	printf("1st integer: ");
	scanf("%d", &a);
	printf("2nd integer: ");
	scanf("%d", &b);
	
	printf("\n");
	
	if (a > b)
	{
		printf("You input two numbers: %d & %d\n", a, b);
		printf("And the max number is: %d\n", a);
	}
	// else ở đây được hiểu là ngược lại của a > b,
	// có thể a == b hoặc a < b
	else if (a < b)
	{
		printf("You input two numbers: %d & %d\n", a, b);
		printf("And the max number is: %d\n", b);
	}
	// Đây là else của if (a < b)
	else // (a == b)
	{
		printf("You input two numbers: %d & %d\n", a, b);
		printf("You have just input two equal numbers\n", a, b);
	}
	
	return 0;
}