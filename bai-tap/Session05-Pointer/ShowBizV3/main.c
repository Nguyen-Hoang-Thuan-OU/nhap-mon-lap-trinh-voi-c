#include <stdio.h>
#include <stdlib.h>

// Đề bài: Trấn Thành và Hari Won cùng đi Mỹ.
//			(phiên bản hư cấu)

int main(int argc, char *argv[]) {
	
	int tranThanh = 5000;
	int tienDat = 4000;
	int *hariWon;
	
	printf("1st, Tran Thanh now has %d\n", tranThanh);
	printf("1st, Tien Dat now has %d\n", tienDat);
	
	printf("1st, Tran Thanh's wallet is at %d\n", &tranThanh);	// 80
	printf("1st, Tien Dat's wallet is at %d\n", &tienDat);		// 76
	
	printf("\n");
	
	// Hari trỏ đến ví của Tiến Đạt và kiểm tra số tiền
	hariWon = &tienDat;
	printf("1st, Tien Dat said, 'I have %d$.'\n", tienDat);
	printf("1st, Hari said, 'Tien Dat has %d$.'\n", *hariWon);
	
	printf("\n");
	
	// Hari trỏ đến ví của Trấn Thành và kiểm tra số tiền
	//hariWon = &tranThanh;	// Câu này đã quá quen thuộc
	
	// Đi đến địa chỉ kể tiếp được lưu trong danh bạ
	hariWon++; // Thay đổi vị trí toạ độ (4 Byte)
	printf("2nd, Hari said, 'Tran Thanh has %d$.'\n", *hariWon);
	
	printf("\n");
	
	// Hari tăng số tiền trong ví của Trấn Thành lên
	(*hariWon)++; // Tăng giá trị lên 1 đơn vị
	++(*hariWon);
	printf("3rd, Tran Thanh said, 'I have %d$.'\n", tranThanh);
	
	printf("\n");
	
	// Xem lại Hari đang trỏ đến ai
	printf("4th, Hari points to %u\n", hariWon);
	
	printf("\n");
	
	hariWon--;
	printf("5th, after coming back, Hari now pointing to %u\n", hariWon);
	
	return 0;
}