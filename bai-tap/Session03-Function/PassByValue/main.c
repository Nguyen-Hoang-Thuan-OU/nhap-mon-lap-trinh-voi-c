#include <stdio.h>
#include <stdlib.h>

// Đề bài (bài lẻ): minh hoạ cách truyền giá trị đầu vào cho hàm
//					bằng cách tuyền tham trị

// y = f(x) = x^2

void f(int x);

int main(int argc, char *argv[]) {
//	f(5);
	
	int n = 10;
	f(n);
	
	return 0;
}

void f(int x) {
	int y = x * x;
	printf("y = f(%d) = %d^2 = %d\n", x, x, y);
}