#include <stdio.h>
#include <stdlib.h>

// Đề bài: cho một mảng gồm 10 phần tử có sẵn giá trị,
//		   tìm số nhỏ nhất, cho biết nằm ở vị trí thứ mấy trong mảng
//		   và sau đó đưa nó giá trị nhỏ nhất lên đầu mảng

int main(int argc, char *argv[]) {
	
	int a[] = {-5, -10, 100, -50, 100, -1001, 1};
	int t;
	
	printf("Before swaping, the array now is:\n");
	for (int i = 0; i < 7; i++)
		printf("%d\t", a[i]);
	
	// Giả sử a[0] vẫn là nhỏ nhất,
	// duyệt về cuối mảng để kiểm tra xem
	// nếu có bất kì ai nhỏ hơn a[0] thì lập tức đổi chỗ
	for (int i = 1; i < 7; i++)
		// Nếu a[0] > a[nào-đó] -> a[0] hết nhỏ nhất
		// a[0] đang đứng sai chỗ vì số đứng trước > số đứng sau
		if (a[0] > a[i]) { // (a[i] < min)
			// Cất giá trị ngày xưa của a[0] vào t
			t = a[0];
			// Lấy giá trị nhỏ nhất của a[i] để gán vào a[0]
			a[0] = a[i];
			// a[i] nhận lại giá trị nhỏ nhất
			// (giá trị ngày xưa của a[0])
			a[i] = t;
		}
	
	printf("\nAfter swaping, the array now is:\n");
	for (int i = 0; i < 7; i++)
		printf("%d\t", a[i]);
	
	return 0;
}