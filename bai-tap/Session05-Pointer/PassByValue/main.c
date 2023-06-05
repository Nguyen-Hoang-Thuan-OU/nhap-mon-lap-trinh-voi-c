#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm y = f(x) = x^2
//		   Hàm làm nhiệm vụ bình phương đầu vào

void f(int x);

int main(int argc, char *argv[]) {
	
	int x = 10;
	printf("In main(), before calling f(), x is: %d\n", x); // 10
	
	f(x);
	printf("In main(), after calling f(), x finally is: %d\n", x); // 10
	// Vì đây là truyền tham trị,
	// vùng RAM của biến x trong main() và trong f()
	// là hai vùng độc lập nhau (hai thế giới riêng),
	// giá trị của biến x trong f()
	// chỉ là bản sao của biến x của main(),
	// vì vậy, một trong hai thay đổi giá trị
	// sẽ không làm ảnh hưởng đến bên còn lại
	
	return 0;
}

// Hàm nhận đầu vào là x và bình phương lên
void f(int x) {
	printf("In f(), x before ^2 is: %d\n", x); // 10
	
	x *= x;
	printf("In f(), x after ^2 is: %d\n", x); // 100
	// Đảm bảo rằng x đã bị thay đổi giá trị bên trong hàm
}