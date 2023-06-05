#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Đề bài: so sánh hai chuỗi để sau này có thể sắp xếp

int main(int argc, char *argv[]) {
	
	char s1[50] = "Ahihi";
	char s2[50] = "ahihi";
	
	// Kết quả của phép so sánh hai tên mảng
	// Quy ước:
	//			- Đúng: 1 (True)
	//			- Sai: 0 (Fasle)
	//				-> Luôn luôn sai vì hai mảng khác địa chỉ
	int r = s1 == s2;
	printf("r1 = %d\n", r); // 0
	
	// Kiểm tra s1 có lớn hơn s2,
	// nhưng vì không thể sử dụng
	// các phép so sánh và phép gán cho mảng/chuỗi,
	// nên phải sử dụng thông qua hàm
	int result = strcmp(s1, s2);
	// Quy ước: hiệu của hai phần tử trong mảng
	//			sau khi đã trừ cho nhau
	//			- Nếu s1 < s2: -1
	//			- Nếu s1 = s2: 0
	//			- Nếu s1 > s2: 1
	
	printf("r2 = s1 vs. s2: %d\n", result); // -1
	
	if (strcmp(s1, s2) > 0)
		printf("r3 = %s > %s\n", s1, s2);
	else
		printf("r3 = s1 not greater than s2\n"); //
		
	// Gán giá trị mới cho s1 và s2
	// * Trường hợp s1 < s2
	strcpy(s1, "Ahihi");
	strcpy(s2, "z");
	
	result = strcmp(s1, s2);
	printf("r4 = s1 vs. s2: %d\n", result); // -1
		
	// Gán giá trị mới cho s1 và s2
	// * Trường hợp s1 > s2
	strcpy(s1, "Ahihi");
	strcpy(s2, "AH");
	
	result = strcmp(s1, s2);
	printf("r5 = s1 vs. s2: %d\n", result); // 1
		
	// Không phân biệt chữ hoa và chữ thường
	// * Trường hợp s1 = s2
	strcpy(s1, "Ahihi");
	strcpy(s2, "AHIHI");
	
	result = strcmp(s1, s2);
	printf("r6 (case sensitive) = s1 vs. s2: %d\n", result); // 0
	
	result = stricmp(s1, s2);
	printf("r7 (ignore case) = s1 vs. s2: %d\n", result); // 0

	// Nếu s1 > s2 (kết quả phép so sánh > 0)
//	if (strcmp(s1, s2) > 0)
//		swap(s1, s2);

	return 0;
}