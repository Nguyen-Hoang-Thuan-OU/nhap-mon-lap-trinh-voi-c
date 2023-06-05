#include <stdio.h>
#include <stdlib.h>

// Đề bài: Trấn Thành và Hari Won cùng đi Mỹ.
//			(phiên bản hư cấu)

int main(int argc, char *argv[]) {
	
	int tranThanh = 5000;
	int tienDat = 4000;
	
	printf("1st, Tran Thanh now has %d\n", tranThanh);
	printf("1st, Tien Dat now has %d\n", tienDat);
	
	printf("1st, Tran Thanh's wallet is at %d\n", &tranThanh);
	printf("1st, Tien Dat's wallet is at %d\n", &tienDat);
	
	printf("\n");
	
	int* hariWon = &tranThanh;
	
	// Hỏi Hari xem Trấn Thành đang có bao nhiêu tiền
	printf("1st, Hari said, 'Tran Thanh has %d$.'\n", *hariWon);
	
	printf("\n");
	
	// Hari sử dụng tiền trong ví của Trấn Thành
	// để mua sắm hết 4000 đô
	*hariWon -= 4000;
	
	// Hỏi lại tiền trong ví của Trấn Thành còn bao nhiêu
	printf("2nd, Hari said, 'Tran Thanh has %d$ after I went shopping (4k).'\n", *hariWon);
	printf("2nd, Tran Thanh said, 'I have %d$ after Hari went shopping (4k).'\n", tranThanh);
	
	printf("\n");
	
	// Hari đi chơi với Tiến Đạt
	// (đổi vị trí để trỏ đến một biến khác)
	hariWon = &tienDat;
	
	// Hỏi Hari xem Tiến Đạt đang có bao nhiêu tiền
	printf("3rd, Hari said, 'Tien Dat has %d$.'\n", *hariWon);
	
	printf("\n");
	
	// Hari sử dụng tiền trong ví của Tiến Đạt
	// để mua sắm hết 2000 đô
	*hariWon -= 2000;
	
	// Hỏi lại tiền trong ví của Tiến Đạt còn bao nhiêu
	printf("4th, Hari said, 'Tien Dat has %d$ after I went shopping (2k).'\n", *hariWon);
	printf("4th, Tien Dat said, 'I have %d$ after Hari went shopping (2k).'\n", tienDat);
	
	printf("\n");
	
	return 0;
}