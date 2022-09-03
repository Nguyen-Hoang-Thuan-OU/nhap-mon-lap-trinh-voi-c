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
		if (a[i] == 10) {
			printf("Hey, now that I've found 10 at position of %d in the array\n", i);
			break;
		}
	}
	
	// Chỉ kết luận không tìm thấy 10
	// sau khi đã so sánh với hết tất cả các phần tử
	//	-> Sử dụng biến cờ
	
	// Giả định: ngay từ đầu số 10 không xuất hiện,
	//			 sau đó đem so sánh với từng phần tử
	//			 cho đến phần tử cuối cùng
	//	-> Nếu không tìm thấy thì kết luận không có,
	//	   nếu tìm thấy thì dùng beak và không cần hỏi tiếp
	
	// Quy ước: cờ = 0 -> Không tìm thấy
	//			cờ = 1 -> Tìm thấy
	return 0;
}