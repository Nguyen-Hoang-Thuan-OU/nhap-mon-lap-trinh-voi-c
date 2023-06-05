#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[]) {
	
	printf("-----Welcome to Fortune Teller-----\n");
	printf("You're required to input the 1st letter in your first name.\n");
	printf("Then, I'll show you your fate.\n");
	
	printf("\n");
	
	char firstLetter;
	
	printf("Please input the 1st letter in your first name: ");
	scanf("%c", &firstLetter);
	printf("\n");
	
	firstLetter = toupper(firstLetter);
	
	if (firstLetter == 'A')
		printf(">> Nguoi co ten bat dau bang chu cai A: Dua cot khong phai la so truong cua ban.\n");
	else // Ngược lại của A và a (phần còn lại rất rộng)
	{
		// firstLetter = B, b, C, c... !, @, #, $...
	
		// Biết đã khác A và a rồi, nhưng có phải là B hoặc b?
		if (firstLetter == 'B')
			printf(">> Nguoi co ten bat dau bang chu cai B: Ban la nguoi tram tinh, nhay cam...\n");
		else // Ngược lại của A, a, B, b
		{
			if (firstLetter == 'C')
				printf(">> Nguoi co ten bat dau bang chu cai C: Tinh cam cua ban rat tu nhien, gan gui, than mat.\n");
			else
				printf("Coming soon...\n");
		}
	}
		
	return 0;
}