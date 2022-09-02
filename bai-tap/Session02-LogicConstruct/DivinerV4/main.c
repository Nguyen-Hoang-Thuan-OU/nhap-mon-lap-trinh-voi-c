#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Đề bài: tính toán và in ra tính cách
//		   dựa vào kí tự đầu tiên trong tên gọi

// Input	: kí tự đầu tiên trong tên gọi
// Process	: tuỳ kí tự là A, B, C, D...
//				-> Ghép với tính cách đã được nhân loại tổng hợp sẵn
// Output	: in ra tính cách tương ứng

int main(int argc, char *argv[]) {
	
	printf("-----Welcome to Fortune Teller-----\n");
	printf("You're required to input the 1st letter in your first name.\n");
	printf("Then, I'll show you your fate.\n");
	
	printf("\n");
	
	// Input: kí tự đầu tiên trong tên gọi
	char firstLetter;
	
	printf("Please input the 1st letter in your first name: ");
	scanf("%c", &firstLetter);
	printf("\n");
	
	// Xem A và a là một
	// nên chỉ cần so sánh với một trong hai là được
	// (nếu gõ a thường thì tự động chuyển thành A hoa)
	
	// Nếu đúng là đang nhập chữ cái thường a..z
	// thì chuyển đổi thành chữ hoa A..Z
	firstLetter = toupper(firstLetter);
	
	// Process: tuỳ kí tự là A, B, C, D...
	//				-> Ghép với tính cách đã được tổng hợp sẵn
	
	// Sau khi đã có được một kí tự
	
	// Output: in ra tính cách tương ứng
	if (firstLetter == 'A')
		printf(">> Nguoi co ten bat dau bang chu cai A: Dua cot khong phai la so truong cua ban.\n");
	
	if (firstLetter == 'B')
		printf(">> Nguoi co ten bat dau bang chu cai B: Ban la nguoi tram tinh, nhay cam...\n");
	
	if (firstLetter == 'C')
		printf(">> Nguoi co ten bat dau bang chu cai C: Tinh cam cua ban rat tu nhien, gan gui, than mat.\n");
//	else
//		printf("Coming soon...\n");
		
	return 0;
}