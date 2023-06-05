#include <stdio.h>
#include <stdlib.h>

// Đề bài: cho một mảng gồm 10 phần tử có sẵn giá trị,
//		   tìm số nhỏ nhất, cho biết nằm ở vị trí thứ mấy trong mảng
//		   và sau đó đưa nó giá trị nhỏ nhất lên đầu mảng

int main(int argc, char *argv[]) {
	
	int a[] = {-5, 10, 100, -50, 100, 1, -1001};
	
	// Mắc định, vị trí đầu tiên có giá trị nhỏ nhất
	int min = a[0];
	// Đồng thời, vị trí đầu tiên cũng phải mặc định là 0
	// đề phòng trường hợp vị trí thứ 0 là vị trí nhỏ nhất,
	// mà nếu đã nhỏ nhất ngay từ đầu thì câu lệnh if
	// trong vòng lặp for sẽ không được thực thi
	// và biến pos cũng sẽ không được gán giá trị
	//	-> Vị trí tìm thấy nhỏ nhất, không tính đầu mảng
	int pos = 0;
	int t;
	
	// Tìm giá trị nhỏ nhất trong mảng
	for (int i = 1; i < 7; i++)
		if (a[i] < min) {
			// Nếu có ai đó nhỏ hơn cả min
			// thì sẽ đổi giá trị cho min
			min = a[i];
			// Đồng thời lưu lại vị trí của min mới
			// vì nếu chủ quan không lưu lại
			// thì i sẽ tăng liên tục và lạc mất vị trí
			pos = i;
		}
	printf("The min value is %d\n", min);
	printf("And it's found at the position of %d\n", pos);
	
	// Hiển thị mảng trước khi hoán đổi
	printf("\nBefore swaping, the array now is:\n");
	for (int i = 0; i < 7; i++)
		printf("%d\t", a[i]);
	
	// Duyệt bắt đầu từ 1 nên nếu pos bị thay đổi giá trị
	// thì nghĩa là đã có một phần tử nào đó nhỏ hơn min,
	// sau đó sẽ hoán đổi phần tử nhỏ nhất lên đầu mảng,
	// còn pos vẫn bằng 0 nghĩa là đầu mảng đang nhỏ nhất
	if (pos > 0) {
		// Tạm cất giá trị mà ban đầu xem là min vào t
		t = a[0];
		// Sau đó, đầu mảng a[0] nhận giá trị min mới
		// nhờ có biến pos để lưu nơi tìm thấy min
		a[0] = a[pos];
		// Cuối cùng, min mới nhận lại giá trị
		// mà ban đầu xem là min do a[0] đã cất trước đó
		a[pos] = t;
	}
	
	// Hiển thị mảng sau khi đã hoán đổi
	printf("\nAfter swaping, the array now is:\n");
	for (int i = 0; i < 7; i++)
		printf("%d\t", a[i]);
	
	return 0;
}