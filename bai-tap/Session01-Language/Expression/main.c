#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// PHÉP TOÁN 2 NGÔI
	
	int a = 10, b = 3;
	printf("a = %d\nb = %d\n", a, b);
	
	// Result là vùng RAM chứa kết quả tính toán
	int result;
	
	// Phép trừ
	result = a - b;
	printf("result a - b = %d\n", result); // 7
	
	// Phép nhân
	result = a * b;
	printf("result a * b = %d\n", result); // 30
	
	// Chia nhưng chỉ lấy phần nguyên
	result = a / b;
	printf("result a / b (1) = %d\n", result); // 3 vì chỉ lấy phần nguyên
	
	// (Mong muốn) Chia lấy luôn cả phần dư
	float result2 = a / b; // Số nguyên/số nguyên -> Số nguyên
	printf("result a / b (2) = %f\n", result2); // 3.000000 vì vẫn là số nguyên
	
	// (Thật sự) Chia lấy luôn cả phần dư
	float result3 = (a * 1.0) / b; // Số thực/số nguyên -> Số thực
	printf("result a / b (3) = %f\n", result3); // 3.333333
	
	// (Thật sự) Chia lấy luôn cả phần dư
	float result4 = a / (b * 1.0); // Số nguyên/số thực -> Số thực
	printf("result a / b (4) = %f\n", result4); // 3.333333
	printf("\n");
	
	//------------------------------------------------------
	
	// PHÉP TOÁN 1 NGÔI
	
	// Khai báo một vùng RAM tên "n",
	// On/Off để ra được số 10 ở ngoài đời thực
	int n = 10;
	
	// Giá trị của n
	printf("n = %d\n", n); // 10
	
	// Địa chỉ của n
	printf("n address = %u\n", &n);
	printf("\n");
	
	// Tăng n lên 1 đơn vị/giá trị
	// Phép tăng tự thân
	n = n + 1;
	printf("#1: after increasing by 1, n = %d\n", n); // 11
	
	n += 1;
	printf("#2: after increasing by 1, n = %d\n", n); // 12
	
	n++;
	printf("#3: after increasing by 1, n = %d\n", n); // 13
	
	++n;
	printf("#4: after increasing by 1, n = %d\n", n); // 14
	printf("\n");
	
		// Xét riêng ++ --
	int m = 10, r1;
	printf("m = %d\n", m); // 10
	
	r1 = m++;
	printf("r = %d; m = %d\n", r1, m);
	
	r1 = ++m;
	printf("r = %d; m = %d\n", r1, m);
	
		// Tăng lên một lượng nhất định
	m = m + 8;
	printf("For the last, m is now: %d\n", m); // 20
	
		// Nhồi tự thân += -= *= %=
		// Ví dụ: m = m + 8;
		//			-> m += 8;
	
	return 0;
}