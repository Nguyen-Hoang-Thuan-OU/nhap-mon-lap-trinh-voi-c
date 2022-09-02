#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Kiểm trả xem tuổi được nhập
	// có nằm trong giai đoạn thanh xuân [20..30] hay không?
	int age = 20;
	
	int result = age >= 20 && age <= 30;
	printf("Result: %d\n", result);
	printf("Your age is %d!\n", age);
	
	if (age >= 20 && age <= 30)
		printf("You're in your youth! - [20..30]\n");
	else
		printf("You're too old or too young! - [20..30]\n");
	printf("\n");
		
	// Đề bài: viết một chương trình mời nhập số nguyên bất kỳ,
	// sau đó in ra thông báo rằng
	// con số này có nằm ngoài đoạn 1..100 hay không?
	
	// Ví dụ: gọi số cần nhập là x
	// nhập x = -5 -> ngoài đoạn [1..100]
	// nhập x = 101 -> ngoài đoạn [1..100]
	// nhập x = 50 -> trong đoạn [1..100]
	int x;
	
	printf("Please input an integer.\n");
	printf("I will check if this number is in the range of [1..100] or not: ");
	scanf("%d", &x);
	
	// Kiểm tra có nằm ngoài miền giá trị hay không?
	int check;
	check = x < 1 || x > 100;
	printf("0: in / 1: out | Result: %d\n", check);
	
	if (x < 1 || x > 100)
		printf("Sorry, your number %d is out the range of [1..100]\n", x);
	else
		printf("Yes, your number %d is in the range of [1..100]\n", x);
			
	return 0;
}