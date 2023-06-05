#include <stdio.h>
#include <stdlib.h>

// Đề bài: hack RAM thông qua con trỏ

/*
	Giả sử lưu một con số nguyên 16,164 bằng 4 Byte

	Trong bảng mã ASCII:
			- Kí tự '?'
				+ Theo kiểu thập phân: 63
				+ Theo kiểu nhị phân: 0011 1111
				
			- Kí tự '$'
				+ Theo kiểu thập phân: 36
				+ Theo kiểu nhị phân: 0010 0100

	Như vậy, ta sẽ có 4 Byte nhị phân như sau:
		0000 0000    0000 0000    0011 1111    0010 0100
			0			 0			 63			  36
*/

int main(int argc, char *argv[]) {
	
	// Trong RAM lưu con số 4 Byte
	// Trong đó, 2 Byte cuối là 2 con số 63 và 36
	int gift = 16164;
	
	int* hariWon = &gift;
	
	char* hack = &gift;
	
	// Hỏi xem Hari đang lưu toạ độ địa chỉ gì
	printf("Gift address = %u\n", hariWon);
	
	// Hỏi xem Hari đang trỏ đến giá trị cụ thể nào
	printf("Gift (Hari) = %d\n", *hariWon); // 16164
	
	// Hỏi xem hack đang trỏ đến giá trị cụ thể nào
	printf("Gift (Hack) = %c\n", *hack);
	
	// Xem địa chỉ hiện tại của hack
	printf("'%c' address = %u\n", *hack, hack);
	
	// Di chuyển vùng RAM kế tiếp
	hack++;
	
	// Hỏi xem hack đang trỏ đến giá trị cụ thể nào
	printf("Finally, gift (Hack) = %c\n", *hack);
	
	// Xem địa chỉ hiện tại của hack
	printf("Finally, '%c' address = %u\n", *hack, hack);
	
	return 0;
}