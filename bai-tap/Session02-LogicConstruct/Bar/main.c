#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập vào năm sinh,
// sau đó kiểm tra và trả lời có đủ tuổi vào quán bar hay không.

// Input: năm sinh -> tuổi
// Process:
//			Có năm sinh -> tuổi.
//				=> Quyết định có được vào bar hay không + thông báo (output)
// Ouput: cho phép vào bar hay không

int main(int argc, char *argv[]) {
	
	int yob, age;
	
	printf("-----Welcome to Gangsta Paradise-----\n");
	printf("Please show your ID card/yob: ");
	scanf("%d", &yob);
	
	age = 2022 - yob;
	
	if (age >= 18)
		printf("Khong say khong ve. Nhung say thi sao ve?\n");
	
	if (age < 18)
		printf("Hey, rich kid. Go home, now!\n");
	
	return 0;
}