#include <stdio.h>
#include <stdlib.h>

// Đề bài (bài lẻ): minh hoạ cho khái niệm tầm vực của biến

int yob = 2000;

void printYob();
void printLatestYob();
void seeNothing();

int main(int argc, char *argv[]) {
	seeNothing();
	printf("In main(), your yob is: %d\n", yob);
	return 0;
}

void seeNothing() {
	// Biến cục bộ khai báo trùng tên với biến toàn cục
	// Xuất hiện hiện tượng con ông cháu cha
	int yob = 2022;
	printf("In seeNothing(), your yob is: %d\n", yob);
}

void printYob() {
	int age = 2022 - yob;
}

void printLatestYob() {
	//int age;
	// Không thấy được biến age
	// do nó là biến cục bộ của hàm printYob()
	//printf("Your age is: %d\n", age);
}