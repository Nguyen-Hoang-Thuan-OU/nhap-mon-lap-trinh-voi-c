#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Đề bài: Nhập in hoa một chữ cái đầu tiên trong tên
	//		   từ bàn phím, sau đó in ra thường
	
	char firstLetter;
	printf("Please input the first letter of your first name: ");
	scanf("%c", &firstLetter);
	
	printf("You have just input the character    : %c\n", firstLetter);
	
	// Lệnh đổi kí tự hoa sang thường
	firstLetter += 32;
	
	printf("And it is converted to lowercase as\t: %c\n", firstLetter);
	
	return 0;
}