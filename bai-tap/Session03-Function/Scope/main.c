#include <stdio.h>
#include <stdlib.h>

// Đề bài (bài lẻ): minh hoạ cho khái niệm tầm vực của biến

// Khai báo biến toàn cục (Global variable),
// hàm nào cũng có thể thấy được
int yob;

// Khai báo nguyên mẫu hàm (Prototype)
void printYob();
void printLatestYob();

int main(int argc, char *argv[]) {
	printf("In main(), yob is: %d\n", yob);
	
	//yob = 2000;
	printYob(); // Gọi hàm
	printLatestYob();
	
	printf("In main(), after calling yob, yob finally is: %d\n", yob);
	
	return 0;
}

// Khai báo hàm (Function)
void printYob() {
	printf("In printYob(), yob is: %d\n", yob);
	
	yob = 2022;
	printf("In printYob(), after updating yob, yob now is: %d\n", yob);
}

void printLatestYob() {
	printf("In printLatestYob(), yob is: %d\n", yob);
	
	yob = 2077;
	printf("In printLatestYob(), after updating yob, yob now is: %d\n", yob);
}