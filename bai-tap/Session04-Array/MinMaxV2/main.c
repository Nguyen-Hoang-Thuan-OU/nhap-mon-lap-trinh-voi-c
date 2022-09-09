#include <stdio.h>
#include <stdlib.h>

// Đề bài: tìm giá trị nhỏ nhất và lớn nhất
//		   trong một mảng được nhập từ bàn phím

int main(int argc, char *argv[]) {
	
	int a[10];
	int min, max;
	
	printf("Please input 10 numbers to find the min/max\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", (i + 1));
		scanf("%d", &a[i]);
	}
	
	printf("\nYou have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	
	// Không thể gán từ sớm vì đây là nhập từ bàn phím,
	// vì vậy phải đợi nhập xong thì mới có giá trị để gán
	min = a[0];
	for (int i = 1; i < 10; i++)
		if (a[i] < min)
			min = a[i];
	printf("\nThe min value of this array is: %d\n", min);
	
	max = a[0];
	for (int i = 1; i < 10; i++)
		if (a[i] > min)
			max = a[i];
	printf("\nThe max value of this array is: %d\n", max);
	
	return 0;
}