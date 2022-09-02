#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập năm sinh từ bàn phím và sau đó tính tuổi

int main(int argc, char *argv[]) {
	
	// Mới có tên biến chứ chưa có giá trị
	int yob, age;
	
	// Đưa dữ liệu từ bàn phím vào trong RAM
	printf("Please input your year of birth: ");
	// Cần phải có địa chỉ để biết dữ liệu được trực tiếp gửi vào đâu
	scanf("%d", &yob);
	
	age = 2022 - yob;
	
	printf("As I guest, you're '%d' years old!\n", age);
	
	return 0;
}