#include <stdio.h>
#include <stdlib.h>

// Đề bài: lưu và in 10 cột điểm của một môn học

int main(int argc, char *argv[]) {
	
	float col[10];
	
	printf("Please input 10 grade (0..10) of the C class\n");
	for (int i = 0; i < 10; i++) {
		printf("Input grade[%d]: ", (i + 1)); // Lừa đảo chỉ số mảng
		scanf("%f", &col[i]);
	}
	
	printf("Here is your grades:\n");
	for (int i = 0; i < 10; i++)
		printf("%.2f\t", col[i]);
	
	return 0;
}