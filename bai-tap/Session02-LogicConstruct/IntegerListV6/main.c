#include <stdio.h>
#include <stdlib.h>

// Vòng lặp vô cực/vô tận
// Đề bài: in các số tự nhiên từ 1..100

int main(int argc, char *argv[]) {
	
	printf("The list of numbers from 1 to 100\n");
	
	// Vòng lặp vô cực/vô tận
	// vì điều kiện dừng lặp mãi mãi đúng
	for (int i = 1; i <= i; i++)
	{
		printf("%d ", i);
		
		// Điều kiện thoát đặt ở bên trong for
		// (vòng lặp cứ chạy, sau đó nhìn dấu hiệu để dừng)
		if (i == 100)
			break;
	}
	
	return 0;
}