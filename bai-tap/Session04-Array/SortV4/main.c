#include <stdio.h>
#include <stdlib.h>

// Đề bài: cho một mảng 5 phần tử,
//		   hãy sắp xếp theo thứ tự tăng dần

int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, 15, -20, 25};
	int t;
	
	// Hiển thị mảng trước khi sắp xếp tăng dần
	printf("\nThe array before sorting ascending is:\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", a[i]);
		
	//		 i						j (i + 1)
	// Lấy a[0] làm mốc, duyệt từ a[1]
	// Lấy a[1] làm mốc, duyệt từ a[2]
	// Lấy a[2] làm mốc, duyệt từ a[3]
	// Lấy a[3] làm mốc, duyệt từ a[4]
	// (chỉ xét đến a[3] vì đây là phần tử áp chót của mảng)
	
	// Lặp lại nhiều lần đổi chỗ và sau đó chốt
	for (int i = 0; i < 5 - 1; i++) {
		// Tìm số nhỏ nhất và đổi chỗ
		for (int j = i + 1; j < 5; j++)
			if (a[i] > a[j]) { // a[0] > a[i]
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	}
	
	// Hiển thị mảng sau khi đã xếp tăng dần
	printf("\nThe array before sorting ascending is:\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", a[i]);
	
	return 0;
}