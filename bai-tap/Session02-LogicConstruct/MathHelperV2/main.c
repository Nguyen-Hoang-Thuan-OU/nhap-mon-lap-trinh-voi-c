#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int option;
	float radius, area;
	
	do
	{
		printf("-----Welcome to Math Helper-----\n");
	
		printf("\n");
		
		printf("Please choose the following functions to play with:\n");
		printf("1. Compute the disk area\n");
		printf("2. Compute the rectangle area\n");
		printf("3. Compute the triangle area\n");
		printf("4. Quit\n");
		
		printf("\n");
	
		printf("Please choose 1..4: ");
		scanf("%d", &option);
		
		printf("\n");
		
		switch(option)
		{
			case 1:
				printf("You choose 1 to compute the disk area\n");
				printf("Please input a disk's radius: ");
				scanf("%f", &radius);
				
				area = 3.14 * radius * radius;
				
				printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
				printf("\n");
				break;
				
			case 2:
				printf("Coming soon...\n");
				printf("\n");
				break;
				
			case 3:
				printf("Coming soon...\n");
				printf("\n");
				break;
				
			case 4:
				printf("Bye, see you next time!\n");
				printf("\n");
				break;
				
			default: // Nhập những giá trị không phải là 1, 2, 3, 4
				printf("[???] Sorry, please choose 1..4\n");
				printf("\n");
		}
	
	} while (option != 4); // Vẫn chạy tiếp nếu chưa chọn trúng 4
						   // (chưa trả tiền thì vẫn còn ăn/uống)


	return 0;
}