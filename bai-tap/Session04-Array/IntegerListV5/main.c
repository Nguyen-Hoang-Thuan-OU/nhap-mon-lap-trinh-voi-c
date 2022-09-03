#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập từ bàn phím một mảng gồm 10 phần tử
//			và kiểm tra xem số 10 có xuất hiện trong mảng


int main(int argc, char *argv[]) {
	
	// Khai báo mảng a với 10 phần tử
	int a[10];
	
	// Biến pos (position) vừa đóng vai trò là biến cờ,
	// vừa để lưu vị trí tìm thấy
	
	// Biến pos vẫn sẽ là -1 nếu không tìm thấy 10,
	// còn nếu tìm thấy 10 thì pos sẽ được gán giá trị mới >= 0
	// (giá trị tương đương với vị trí tìm thấy)
	int pos = -1;
	
	// Nhập số 10 từ bàn phím
	printf("Please input 10 numbers:\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", (i + 1));
		scanf("%d", &a[i]);
	}
	
	// In ra 10 phần tử vừa nhập từ bàn phím
	printf("\nYou have just input the following numbers:\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
		
	// Tìm kiếm xem số 10 có tồn tại trong mảng
	for (int i = 0; i < 10; i++)
		if (a[i] == 10) {
			// Biến pos sẽ lưu lại vị trí tìm thấy 10,
			// đồng thời thông báo rằng đã tìm thấy 10
			pos = i;
			break;
		}
		
	if (pos == -1)
		printf("\nSorry, can't find 10 anywhere in the array!\n");
	else
		printf("\nHey, now that I've found 10 in the array at the position %d\n", (pos + 1));
	
	return 0;
}