#include <stdio.h>
#include <stdlib.h>

// Đề bài: hỗ trợ làm các phép toán cơ bản,
//		   hệ thống sẽ cung cấp menu
//		   để người dùng chọn tính năng mong muốn
//
//		   Ví dụ:
//					1. Tính diện tích hình tròn
//					2. Tính diện tích hình chữ nhật
//					...
//					10. Thoát chương trình

// Input	: cho biết lựa chọn, biến option làm trung gian
// Process	: xử lý tuỳ theo lựa chọn
// Output	: tuỳ vào lựa chọn mà sẽ có đầu ra tương ứng

int main(int argc, char *argv[]) {
	
	int option;
	float radius, area;
	
	printf("-----Welcome to Math Helper-----\n");
	
	printf("\n");
	
	printf("Please choose the following functions to play with:\n");
	printf("1. Compute the disk area\n");
	printf("2. Compute the rectangle area\n");
	printf("3. Compute the triangle area\n");
	printf("4. Quit\n");
	
	printf("\n");
	
	printf("Please choose 1..4: ");
	scanf("%d", &option);
	
	switch(option)
	{
		case 1:
			// Xử lý tính diện tích hình tròn
			// I: bán kính
			// O: diện tích, chu vi
			printf("You choose 1 to compute the disk area\n");
			printf("Please input a disk's radius: ");
			scanf("%f", &radius);
			
			area = 3.14 * radius * radius;
			
			printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
			break;
			
		case 2:
			break;
			
		case 3:
			break;
			
		case 4:
			printf("Bye, see you next time!\n");			
			break;
			
		default: // Nhập những giá trị không phải là 1, 2, 3, 4
			printf("Please choose 1..4\n");			
	}
	
	return 0;
}