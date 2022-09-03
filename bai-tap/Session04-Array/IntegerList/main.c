#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập từ bàn phím một mảng gồm 10 phần tử
//			và kiểm tra xem số 10 có xuất hiện trong mảng

// I: cần 10 biến

// P: lấy từng biến ra và so sánh giá trị với 10

// O: in ra thông báo số 10 có hay không có trong mảng

int main(int argc, char *argv[]) {
	
	// Giả sử nhập từ bàn phím 10 phần tử
	int a[] = {6, -1000, 100, 50, 70, 6, 6, -1, 10};
	
	// Duyệt (quét) từ đầu đến cuối mảng
	for(int i = 0; i < 10; i++) {
		if (a[i] == 10)
			printf("Hey, now that I've found 10 at position of %d in the array\n", i);
		else
			printf("Sorry, can't find 10 anywhere in the array!\n");
	} // (Tư duy bị sai do sử dụng else không đúng chỗ)
	
	
	return 0;
}