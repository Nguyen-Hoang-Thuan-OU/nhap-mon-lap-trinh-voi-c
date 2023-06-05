#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập vào năm sinh và kí tự đầu tiên trong tên
//		   sau đó in ra màn hình:
//			- Năm sinh
//			- Tuổi
//			- Kí tự đầu tiên trong tên

int main(int argc, char *argv[]) {
	
	int yob, age;
	char firstLetter;
	
	printf("You're required to input your profile\n");
	printf("\n");
	
	printf("Firstly, please input your year of birth: ");
	scanf("%d", &yob);
	
	age = 2022 - yob;
	
	// Trước lệnh nhập kí tự/chuỗi
	// có thêm lẹnh dọn rác fflush(stdin);
	fflush(stdin);
	
	printf("Secondly, please input first letter in your first name: ");
	scanf("%c", &firstLetter);
	
	printf("\n");
	
	printf("-----Your profile is-----\n");
	printf("Your yob: %d\n", yob);
	printf("Your age: %d\n", age);
	printf("Your first letter in first name: %c\n", firstLetter);
	
	printf("\n");
	
	// Nhập vào từ bàn phím hai số nguyên x, y
	// sau đó in ra tổng của chúng
	int x, y;
	
	printf("You're required to input two integers\n");
//	printf("1st integer: ");
//	scanf("%d", &x);
//	printf("2nd integer: ");
//	scanf("%d", &y);
	scanf("%d%d", &x, &y);
	
	printf("The sum of %d and %d is: %d\n", x, y, (x + y));
	
	return 0;
}