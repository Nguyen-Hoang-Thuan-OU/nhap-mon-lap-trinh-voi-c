#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm cho bài MathHelper
//		   mô phỏng lại ứng dụng Calculator của Windows

void printMenu();

int main(int argc, char *argv[]) {
	
	int choice;
	float radius, area;
	
	// Chưa chọn 5 thì không cho thoát
	do {
	
		printMenu();
		
		printf(">> Choose 1..5: ");
		scanf("%d", &choice);
			
		printf("\n");
		
		switch(choice) {
			case 1:
				printf("You choose to compute the disk's area\n");
				
				printf("Please input a radius (n > 0): ");
				scanf("%f", &radius);
				
				area = 3.14 * radius * radius;
				
				printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
				
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
				printf("Bye bye, see you next time!\n");
				break;
				
			default:
				printf("Please choose option 1..5!\n");		
		}
		
		printf("\n");
		
	} while (choice != 5);
	
	return 0;
}

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