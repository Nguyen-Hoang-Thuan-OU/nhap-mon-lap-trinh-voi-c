#include <stdio.h>
#include <stdlib.h>

// Đề bài: hoán đổi giá trị của hai biến cho nhau

int main(int argc, char *argv[]) {
	
	int a = 23;
	int b = 100;
	// t (tmp, temp, temporary): biến trung gian
	// để lưu trữ tạm thời giá trị nào đó (giá trị cũ)
	int t;
	
	printf("Before swaping, a = %d; b = %d\n", a, b);
	
	// Cất tạm giá trị hiện tại của a (23) vào biến t
	t = a;
	// a lấy giá trị mới từ b (100) đưa sang
	a = b;
	// b nhận lại giá trị cũ của a (23) được cất trong t
	b = t;
	printf("After swaping, a = %d; b = %d\n", a, b);
	
	return 0;
}