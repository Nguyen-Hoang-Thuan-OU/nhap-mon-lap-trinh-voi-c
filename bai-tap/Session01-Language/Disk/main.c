#include <stdio.h>
#include <stdlib.h>

// Hằng số - kí hiệu cho một vùng RAM chỉ có thể đọc (read-only)
const float PI = 3.1415;

// Đề bài: tính diện tích của hình tròn sau khi nhập bán kính
// Công thức tính: s = pi * r^2

int main(int argc, char *argv[]) {
	
	// Mặc định, số thực (float) sẽ in 6 phần thập phân
	float radius, area;
	
	printf("Please input a radius of a disk: ");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	
	printf("The area of a disk (r = %f) is: %f \n", radius, area);
	
	// In theo kiểu mới (đã giới hạn phần thập phân của số thực)
	printf("The area of a disk (r = %.2f) is: %.2f \n", radius, area);
	
	return 0;
}