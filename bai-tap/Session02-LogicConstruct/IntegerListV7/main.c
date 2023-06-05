#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("The list of numbers from 1 to 100\n");
	
	int count = 1;
	
	// Không quá khứ và khởi đầu, không kết thúc và không đếm gì cả
	for (;;)
	{
		printf("%d ", count);		
		count++;
		
		if (count == 101)
			break;
	}
	
	return 0;
}