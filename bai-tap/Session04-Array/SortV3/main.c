#include <stdio.h>
#include <stdlib.h>

// Đề bài: cho một mảng gồm 5 phần tử có sẵn giá trị,
//		   tìm số nhỏ nhất và đưa nó lên đầu mảng
//		   (sắp xếp mảng tăng dần từ trái sang phải)

// Tính từ 1, mảng có bao nhiêu phần tử
// thì điều kiện dừng của for là < số phần tử
//	Ví dụ: tính từ 1, mảng có 5 phần tử
//			for (int i = 0; i < 5; i++)
//				-> Mảng đếm từ 0 và chạy đến 4 thì dừng

int main(int argc, char *argv[]) {
	
	int a[] = {50, 100, -50, 1, -1001};
	int t;
	
	// Hiển thị mảng trước khi hoán đổi
	printf("\nBefore sorting ascending, the array is:\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", a[i]);
	
	// Tìm giá trị nhỏ nhất trong mảng
	for (int i = 1; i < 5; i++)
		if (a[0] > a[i]) {
			t = a[0];
			a[0] = a[i];
			a[i] = t;
		}
	// Sau vòng lặp này, a[0] xem như đã yên bề gia thất,
	// về sau chỉ quan tâm phần còn lại (từ a[1] trở đi)
	
	// Tìm giá trị nhỏ nhì trong mảng
	for (int i = 2; i < 5; i++)
		if (a[1] > a[i]) {
			t = a[1];
			a[1] = a[i];
			a[i] = t;
		}
	
	// Tìm giá trị nhỏ thứ ba trong mảng
	for (int i = 3; i < 5; i++)
		if (a[2] > a[i]) {
			t = a[2];
			a[2] = a[i];
			a[i] = t;
		}
	
	// Tìm giá trị nhỏ thứ tư trong mảng
	for (int i = 4; i < 5; i++)
		if (a[3] > a[i]) {
			t = a[3];
			a[3] = a[i];
			a[i] = t;
		}
	
	// Hiển thị mảng sau khi đã hoán đổi
	printf("\nAfter sorting ascending, the array now is:\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", a[i]);
	
	return 0;
}