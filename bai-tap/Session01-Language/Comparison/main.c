#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// 5 > 6, đúng hay sai?
	int result = 5 > 6;
	printf("5 > 6? %d\n", result);
	
	// 5 < 6, đúng hay sai?
	result = 5 < 6;
	printf("5 < 6? %d\n", result);
	
	// 6 > 6, đúng hay sai?
	result = 6 > 6;
	printf("6 > 6? %d\n", result);
	
	// 6 >= 6, đúng hay sai?
	result = 6 >= 6;
	printf("6 >= 6? %d\n", result);
	
	// 100 = 8, đúng hay sai?
	result = 100 == 8;
	printf("100 = 8? %d\n", result);
	
	// 100 = 100, đúng hay sai?
	result = 100 == 100;
	printf("100 = 100? %d\n", result);
	
	// 100 ≠ 100, đúng hay sai?
	result = 100 != 100; // Nếu khẳng định 100 ≠ 100 <- SAI
	printf("100 <> 100? %d\n", result);
	printf("\n");
	
	// Cho 2 số a = 10 và b = 3
	// a > b, đúng hay sai?
	int a = 10, b = 3;
	result = a > b; // Một biểu thức truyền thống
	printf("a > b? %d\n", result);
	
	// a ≠ 100, đúng hay sai?
	result = a != 100;
	printf("a <> 100? %d\n", result);
	printf("\n");
	
	// Dùng so sánh để quyết định làm một việc gì đó
	// Đề: Cho tuổi của bạn là con số nguyên nào đó,
	// nếu tuổi < 20: chào bé
	// nếu tuổi >= 20: chào bạn
	int age = 21;
	printf("Your age is %d\n", age);
	
	if (age >= 20)
		printf("Truong thanh\n");
		
	if (age < 20)
		printf("Con tre\n");
	
	return 0;
}