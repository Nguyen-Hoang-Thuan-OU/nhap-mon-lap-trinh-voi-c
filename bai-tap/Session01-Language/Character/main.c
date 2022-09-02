#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Lưu một kí tự và in ra màn hình
	// Cặp dấu nháy đơn ('') dùng để lưu một kí tự
	// Cặp dấu nháy đôi ("") dùng để lưu nhiều kí tự
	// 1 Byte trong RAM được On/Off thành kí tự V
	
	// Một kí tự có thể tương tác linh hoạt theo 2 cách:
	// 1. Dùng trực tiếp kí tự
	// 2. Dùng mã số "chống lưng"
	//	-> Máy tính đều phải chuyển kí tự
	//	   thành mã số On/Off trong chip BIOS (UEFI)
	
	//char firstChar = 'T';
	
	unsigned char firstChar = 65;
	
	// Dùng %c để chỉ cho CPU biết cách On/Off
	// bằng vào chip BIOS (UEFI) trên bo mạch chủ (mainboard)
	// để tìm cách ánh xạ thành kí tự trên màn hình
	// (Là sự phối hợp của CPU, RAM, bàn phím, card đồ hoạ,
	//  máy in, màn hình hiển thị, ổ đĩa (HDD/SSD), chip BIOS/UEFI)
	
	printf("The 1st letter of your name is: %c\n", firstChar);
	printf("The ASCII code of '%c' is %d\n", firstChar, firstChar);
	printf("\n");
	
	// %c -> Sử dụng tất cả các bit,
	//		 chuyển đổi thành 234 thập phân,
	//		 ánh xạ vào bảng mã ASCII để thấy được Omega
	
	// %d -> Số nguyên (int),
	//		 về nguyên tắc phải loại bit đầu tiên ra,
	//		 phần còn lại mới được tính là giá trị (số nguyên)
	
	//------------------------------------------------
	
	firstChar += 32;
	
	printf("After converting to lowercase\n");
	printf("Now, the 1st letter of your name is: %c\n", firstChar);
	printf("The ASCII code of '%c' is %d\n", firstChar, firstChar);
	
	return 0;
}