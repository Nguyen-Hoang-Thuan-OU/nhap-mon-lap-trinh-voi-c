#include <stdio.h>
#include <stdlib.h>

// Đề bài: cho một mảng 10 con số
//		   sau đó in ra số nhỏ nhất và lớn nhất của mảng

// I: mảng gồm 10 con số
//	  (Ví dụ: -5, 10, 50, 100, -50, 1000, 1, -5, 1001, 10)

// P: quét từng phần tử thứ [i] trong mảng
//	  sử dụng biến cờ - nguyên tắc giả định
//	  Phần tử [0] = min = -5 (giả sử đúng)
//		if [i] < min => min = [i]
//	  Phần tử [0] = max = -5 (giả sử đúng)
//		if [i] > max => max = [i]
//	  (luôn luôn được điều chỉnh nếu giả định bị sai)

// O: số lớn nhất và nhỏ nhất -> 2 biến

int main(int argc, char *argv[]) {
	
	int a[] = {-5, 10, 50, 100, -50, 1000, 1, -5, 1001, 10};
	int min, max;
	min = a[0];
	max = a[0];
	
	for (int i = 1; i < 10; i++) {
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
			
	printf("The min value of this array is: %d\n", min);
	printf("The max value of this array is: %d\n", max);
	
	return 0;
}