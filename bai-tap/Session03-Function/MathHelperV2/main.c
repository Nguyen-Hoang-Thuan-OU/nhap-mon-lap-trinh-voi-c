#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14; // Biến toàn cục

// Đề bài: viết hàm cho bài MathHelper
//		   mô phỏng lại ứng dụng Calculator của Windows

void printMenu();
void computeDiskArea();

int main(int argc, char *argv[]) {
	
	int choice;
	
	do {
	
		printMenu();
		
		printf(">> Choose 1..5: ");
		scanf("%d", &choice);
			
		printf("\n");
		
		switch(choice) {
			case 1:
				computeDiskArea();
				break;
				
			case 2:
				printf("You choose to compute the rectangle's area\n");
				printf("Please input a ...: ");
				break;
				
			case 3:
				printf("You choose to compute the triangle's area\n");
				printf("Please input a ...: ");
				break;
				
			case 4:
				printf("Coming soon!");
				break;
				
			case 5:
				printf("Bye bye. See you next time!\n");
				break;
				
			default:
				printf("Please choose option 1..5!\n");
		}
		
		printf("\n");
		
	} while (choice != 5);
	
	return 0;
}

// Hàm tính diện tích hình tròn
void computeDiskArea() {

	float radius, area;
	
	printf("You choose to compute the disk's area\n");
	printf("Please input a radius (n > 0): ");
	scanf("%f", &radius);

	//area = 3.14 * pow(radius, 2);
	//area = PI * pow(radius, 2);
	//printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
	
	printf("The disk with r = %.2f has the area of %.2f\n", radius, (PI * pow(radius, 2)));
}

// Hàm in menu
void printMenu() {
	
	printf("\n----- Welcome to Math Helper program! -----\n");
	printf("\nPlease choose the following functions to play with:\n");
	printf("1. Compute the disk's area\n");
	printf("2. Compute the rectangle's area\n");
	printf("3. Compute the triangle's area\n");
	printf("4. Compute ...\n");
	printf("5. Quit!\n");
	
	printf("\n");
	
}