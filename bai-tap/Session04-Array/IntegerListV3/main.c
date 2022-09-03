#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập từ bàn phím một mảng gồm 10 phần tử
//			và kiểm tra xem số 10 có xuất hiện trong mảng

// I: cần 10 biến

// P: lấy từng biến ra và so sánh giá trị với 10

// O: in ra thông báo số 10 có hay không có trong mảng

int main(int argc, char *argv[]) {
	
	// Giả sử nhập từ bàn phím 10 phần tử
	int a[] = {6, -1000, 100, 50, 70, 6, 6, -1, 100};
	
	// Giả sử ban đầu không thấy 10,
	// đến khi tìm thấy thì sẽ thay đổi giá trị
	int found = 0;
	
	// Duyệt (quét) từ đầu đến cuối mảng
	for(int i = 0; i < 10; i++) {
		if (a[i] == 10) {
			// Biến cờ thay đổi giá trị khi tìm thấy
			found = 1;
			break;
		}
	}
	
	// Kiểm tra biến cờ để in kết quả
	if (found == 1)
		printf("Hey, now that I've found 10 in the array\n");
	else
		printf("Sorry, can't find 10 anywhere in the array!\n");
	
	return 0;
}