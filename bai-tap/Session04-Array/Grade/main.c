#include <stdio.h>
#include <stdlib.h>

// Đề bài: lưu 10 cột điểm của một môn học

int main(int argc, char *argv[]) {
	
	// Khai báo lẻ từng biến một,
	// tốn thời gian và công sức nhưng dễ làm
//	float col1, col2, col3, col4, col5,
//			col6, col7, col8, col9, col10;

	// Giống cách khai bảo lẻ bên trên ở điểm
	// vẫn có được 10 biến nhưng sẽ nhanh và khó hiểu hơn,
	// muốn có bao nhiêu biến thì chỉ cần
	// thay đổi giá trị trong cặp ngoặc vuông [số-biến]
	float col[10];
	col[0] = 10.0;
	col[1] = 9.0;
	col[2] = 8.0;
	
	printf("%.2f, %.2f, %.2f, %.2f, %.2f\n", col[0], col[1], col[2], col[3], col[4]);
	
	return 0;
}