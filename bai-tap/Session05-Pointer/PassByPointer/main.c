#include <stdio.h>
#include <stdlib.h>

// Truyền vào địa chỉ

// Truyền tham trị - mỗi lần sử dụng hàm
// cần phải đưa giá trị thông thường (int, double...) vào
//void f(int x);

// Truyền tham chiếu - mỗi lần sử dụng hàm
// không cần phải đưa giá trị thông thường (int, double...)
// mà thay vào đó là đưa địa chỉ của một biến nào khác vào
void f(int* x);

int main(int argc, char *argv[]) {
	
	// Biến cục bộ trong hàm main()
	int x = 10;
	printf("In main(), before calling f(), x is: %d\n", x);
	
	// Đưa địa chỉ của biến x cho hàm f()
	// để thay đổi giá trị trong x trong hàm main()
	f(&x);
	printf("In main(), after calling f(), x finally is: %d\n", x);
	
	return 0;
}

void f(int* x) { // Biến cục bộ trong hàm f()
	// Vì đây là biến con trỏ, trỏ đến một nơi khác,
	// nên nếu trong hàm thực hiện phép toán
	// thì biến ở xa cũng sẽ bị ảnh hưởng
	*x = *x * *x; // (*x) = (*x) * (*x); -> Bình phương
}