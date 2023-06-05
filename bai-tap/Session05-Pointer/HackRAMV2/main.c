#include <stdio.h>
#include <stdlib.h>

// Đề bài: quét thử vùng RAM để lấy địa chỉ của biến,
//		   thay đổi giá trị của vùng RAM
//		   mà không sử dụng &tênBiến
//		   bằng cách ép kiểu dữ liệu thành kiểu con trỏ

int main(int argc, char *argv[]) {
	
	int yob = 2000;
	int* thuan;
	
	printf("The value of yob: %d\n", yob); // 2000
	printf("The address of yob: %u\n", &yob); // 6684180
	
	// Truyền địa chỉ kiểu số nguyên (int)
	// vào biến con trỏ
	//thuan = &yob; // Truyền địa chỉ thông qua &tênBiến
	
	//thuan = 6684188; // Truyền địa chỉ thông qua con số,
					   // nhưng sẽ bị hiểu nhầm
					   // đây chỉ là con số thông thường
	
	// Cách thông báo rằng con số nguyên này
	// là một địa chỉ để cất vào biến con trỏ int*
	thuan = (int*)6684180;
	
	// In ra giá trị của biến con trỏ
	// để xem địa chỉ có thật sự được cất vào biến chưa
	printf("The value of yob (via thuan) now is: %d\n", *thuan); // 2000
	
	// Sửa giá trị của biến
	*thuan = 2022;
	printf("Finally, the value of yob now is: %d\n", yob); // 2022
	
	return 0;
}