#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Số thập phân được lưu vào trong RAM
	// Tên gọi / Biến: yob
	// Giá trị: 2000
	int yob = 2000;
	
	// Số thập phân được lưu vào trong RAM
	// Tên gọi / Biến: grade
	// Giá trị: 10
	int grade = 10;
	
	printf("Your year of birth is: %d \n", yob);
	printf("Your current grade is: %d \n", grade);
	printf("\n");
	
	// Hỏi hai biến bên trên nằm ở đoạn nào trong RAM?
	// (Địa chỉ của biến nằm bắt đầu từ vị trí byte thứ bao nhiêu trong RAM?)
	
	// Dấu "&" được sử dụng để hỏi địa chỉ
	printf("The address of variable 'yob' is: %u \n", &yob);    
	printf("The address of variable 'grade' is: %u \n", &grade);
	printf("\n");
	
	// Đề bài: tính tuổi khi biết năm sinh
	// Công thức: tuổi = năm-hiện-tại - năm-sinh
	// Ví dụ:		22 = 	2022	  -	yob (2000)
	
	// Phân tích: tuổi là một tên gọi
	// 			  để nói về số năm đã sống
	// -> Tuổi là một biến
	int age = 2022 - yob;
	
	printf("As I guest, you are '%d' years old \n", age);  
	
	return 0;
}