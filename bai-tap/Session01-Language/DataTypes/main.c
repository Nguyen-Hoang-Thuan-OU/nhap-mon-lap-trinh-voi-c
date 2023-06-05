#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// ** Thao tác với kiểu dữ liệu int
	
	// Có tổng cộng 8 byte trong RAM đã được cấp
	// để lưu 2 giá trị/con số (nguyên)
	int a = 10, b = 3;
	
	// In ra màn hình giá trị của a và b
	printf("a = %d; b = %d\n", a, b);
	
	// In ra màn hình địa chỉ của a và b
	printf("adress of a = %u; adress of b = %u\n", &a, &b);
	printf("\n");
	
	// Nhập giá trị vào từ bàn phím
	// (Tại một thời điểm, biến chỉ lưu được một giá trị,
	//  giá trị cũ sẽ bị mất nếu cố tình gán một giá tị mới.)
	
	// Gán lại giá trị cho a và in giá trị mới thay đổi
	a = 69;
	printf("a = %d; b = %d\n", a, b);
	
	// ** Thao tác với kiểu dữ liệu float và double
	double c = 0.1, d = 3.14;
	
	// In ra màn hình giá trị của c và d
	printf("c = %lf; d = %lf\n", c, d);
	
	// In ra màn hình địa chỉ của c và d
	
	// CPU chạy từ trên xuống dưới,
	// sau khi in địa chỉ của a và b
	// thì nó sẽ tiếp tục in của c và d
	printf("adress of c = %u; adress of d = %u\n", &c, &d);
	printf("\n");
	
	// Câu lệnh đặc biệt trong ngôn ngữ C để hỏi CPU rằng
	// một kiểu dữ liệu bất kỳ chiếm bao nhiêu byte trong RAM
	
	// Hàm trả về giá trị
	int sizeint = sizeof(int);
	printf("The number of bytes allocated of an int: %d\n", sizeint);
	
	int sizefloat = sizeof(float);
	printf("The number of bytes allocated of an float: %d\n", sizefloat);
		
	printf("The number of bytes allocated of an double: %d\n", sizeof(double));
	printf("\n");
	
	// ** Thao tác với kiểu dữ liệu long
	int moneyint = 2100000000;
	long moneylong = 2100000000L;
	
	// In giá trị sai do vượt quá miền giá trị
	printf("The amount (money) 1: %d\n", moneyint);
	printf("The amount (money) 2: %ld\n", moneylong);
	
	return 0;
}