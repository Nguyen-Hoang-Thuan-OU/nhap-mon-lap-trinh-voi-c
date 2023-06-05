#include <stdio.h>
#include <stdlib.h>

// Đề bài: lưu và in 10 cột điểm của một môn học

int main(int argc, char *argv[]) {
	
	// Khai báo lẻ từng biến một,
	// tốn thời gian và công sức nhưng dễ làm
	float col1, col2, col3, col4, col5,
			col6, col7, col8, col9, col10;
	col1 = 10.0;
	col2 = 9.0;
	col3 = 8.0;
	
	printf("Bien le: %.2f, %.2f, %.2f, %.2f, %.2f\n", col1, col2, col3, col4);

	// Giống cách khai bảo lẻ bên trên ở điểm
	// vẫn có được 10 biến nhưng sẽ nhanh và khó hiểu hơn,
	// muốn có bao nhiêu biến thì chỉ cần
	// thay đổi giá trị trong cặp ngoặc vuông [số-biến]
	float col[10];
	col[0] = 10.0;
	col[1] = 9.0;
	col[2] = 8.0;
	
	printf("Bien mang: %.2f, %.2f, %.2f, %.2f, %.2f\n", col[0], col[1], col[2], col[3], col[4]);
	
	// Nhập giá trị cho phần tử của mảng
	printf("\nPlease input 2 grade (0..10)\n");
	printf("In normal, 2st grade: ");
	scanf("%f", &col2);
	printf("In array, 2nd grade: ");
	scanf("%f", &col[1]);
	
	printf("\nAfter inputing 2 grades, the current grades are\n");
	printf("Bien le: %.2f, %.2f, %.2f, %.2f, %.2f\n", col1, col2, col3, col4);
	printf("Bien mang: %.2f, %.2f, %.2f, %.2f, %.2f\n", col[0], col[1], col[2], col[3], col[4]);
	
	// Để nhập hết 10 biến lẻ và biến sỉ (biến mảng)
	// Đối với biến lẻ:
//	scanf("%f %f %f %f %f %f %f %f %f %f",
//			&col1, &col2, &col3, &col4, &col5, &col6, &col7, &col8, &col9, &col10);
	
	// Đối với biến mảng: i sẽ chạy từ 0..9
//	scanf("%f", &col[i]);
	return 0;
}