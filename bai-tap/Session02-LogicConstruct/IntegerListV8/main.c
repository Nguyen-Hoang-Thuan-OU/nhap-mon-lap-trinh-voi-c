#include <stdio.h>
#include <stdlib.h>

// Đề bài: tính tổng của dãy số nguyên từ 1..100

// I: không cần

// P: lặp lại phép cộng
//	  1. Đưa số vào và tiến hành phép cộng
//	  2. Nhớ tổng đang có
//	  3. Đưa số mới vào và tiến hành phép cộng với tổng đã nhớ trước đó
//	  4. Tiếp tục nhớ tổng mới

// O: tổng của dãy số nguyên là bao nhiêu
//		(có thể là một biến)

int main(int argc, char *argv[]) {
	
	// Khởi tạo ban đầu bằng 0 để tránh giá trị rác
	int acc = 0; // acc = accumulation: cộng dồn, tích luỹ...
	
	printf("-----This program will show the accumulation-----\n");
	printf("This program will show the sum of 100 first integers (1..100)\n");
	
	printf("\n");
	
	for (int i = 1; i <= 100; i++)
		acc = acc + i;
		
	printf("The sum of integer list form 1 to 100 is: %d\n", acc);
	
	return 0;
}