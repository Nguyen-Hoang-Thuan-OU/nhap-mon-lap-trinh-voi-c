#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Đề bài: tự thiết kế hàm sao chép hai chuỗi
//		   bắt chước theo hàm strcpy sẵn có

// Gán chuỗi cho nhau bản chất là sao chép giá trị
// của từng biến char trong mảng
void strcpyCust(char* dest, char* src);

//void strcpyCust(char dest[50], char src[50])
//void strcpyCust(char dest[], char src[])
// Tạo cảm giác thân quen khi làm việc với mảng,
// nhưng những cách khai báo này lại không hay

// Hàm xoá kí tự trong chuỗi
void removeChar();

void removeCharV2();

// Nhập vị trí cần xoá
void removeCharV3();

// Xoá tất cả các con số xuất hiện trong chuỗi
void removeCharV4();

int main(int argc, char *argv[]) {
	
	char s2[50], s1[50] = "Ahihidaucobigiidauta";
	
//	// Hàm nhà người ta
//	strcpy(s2, s1);
//	printf("Name: ");
//	puts(s2);

//	// Hàm nhà làm
	strcpy(s2, s1);
	printf("Name (DIY): ");
	for (int i = 0; i < strlen(s2); i++)
		printf("%c ", s2[i]);
//	puts(s2);

	//removeChar();

	//removeCharV2();

	//removeCharV3();

	//removeCharV4();
	
	return 0;
}

// Xoá tất cả các con số
// hoặc tất cả các kí tự lạ xuất hiện trong chuỗi
// (Có khả năng phải xoá nhiều lần - xoá lặp lại)
void removeCharV4() {
	// Xoá toàn bộ số 1 trong chuỗi
	char s[50] = "A111H";
	
	// Dồn những phần tử ở phía sau lên
	
	// Cách 1: duyệt hết mảng để kiểm tra
	//		   từng kí tự có phải là số và sau đó xoá số
	for (int i = 0; i < strlen(s); i++) {
	
			// Tìm thấy thì xoá	// Nếu là con số từ 0..9
		if (s[i] >= '0' & s[i] <= '9') {
			// từ vị trí [i] trỏ về sau
			for (int j = i; j < strlen(s); j++)
				s[j] = s[j + 1];
				
			// Sau khi đã xoá
			// và dồn phần tử phía sau lên phía trước
			// thì có thể gặp tình huống
			// phần tử ở phía sau mới dồn lên
			// lại là một con số,
			// nên nếu chỉ duyệt một lần tại một vị trí
			// để tìm con số thì có thể sẽ bỏ sót
			
			// Tình trạng này chỉ xảy ra
			// khi có các con số đừng kế nhau trong chuỗi
			
			// Vì vậy, nếu có xoá phần từ
			// thì vẫn sẽ dồn phần tử phía sau lên phía trước,
			// nhưng sẽ không tăng biến đếm i
			// để đề phòng tại vị trí vừa xoá
			// lại là một con số mới được dồn lên
			
			i--;
		}
	}
		
	printf("After removing all numbers in a string: ");
	puts(s);
	
	// Cách 2: duyệt hết mảng và xoá tất cả các kí tự
	//		   không thuộc A-Z và a-z
//	for (int i = 0; i < strlen(s); i++) {
		// Nếu không phải là kí tự A-Z hoa hoặc thường
//		if (!(s[i] >= 'A' & s[i] <= 'Z' || s[i] >= 'a' & s[i] <= 'z'))
		// if (!(tolower(s[i]) >= 'a' && tolower(s[i]) >= 'z'))
}

// Nhập vị trí cần xoá (vị trí hợp lệ)
void removeCharV3() {
	// Xoá kí tự '#' tại vị trí [4]
	char s[50] = "SOS$#Ahihi";
	
	int pos = 4;
	
	for (int i = pos; i < strlen(s); i++)
		s[i] = s[i + 1];
	
	printf("After removing '#': ");
	puts(s);
}

// Có kết hợp vòng lặp
void removeCharV2() {
	char s[50] = "A1hihi";
	
	for (int i = 1; i < strlen(s); i++)
		s[i] = s[i + 1];
	
	printf("After removing 1: ");
	puts(s);
}

// Hàm xoá kí tự trong chuỗi,
// số chỗ (tổng kích thước mảng) vẫn giữ nguyên,
// nhưng những phần tử nằm phía sau phần tử bị xoá
// sẽ bị dồn lên trên
void removeChar() {
	// Có chiều dài là 7 (6 kí tự thường + 1 kí tự NULL)
	char s[50] = "A1hihi";
	
	// Xoá số 1 bị dư tại vị trí [1]
	
	// Bắt đầu từ chỗ muốn xoá,
	// dồn giá trị của phần tử phía sau lên phía trước
	
	//s[0] giữ nguyên
	s[1] = s[2];
	s[2] = s[3];
	s[3] = s[4];
	s[4] = s[5];
	s[5] = s[6];
	
	printf("After removing 1: ");
	puts(s);
}

// - Con trỏ (pointer): trỏ đầu mảng
//
// - Biến con trỏ dest (destination) sẽ trỏ vào
// biến đầu mảng cần nhận dữ liệu về
//
// - Biến con trỏ src (source) sẽ trỏ vào
// biến đầu mảng đang có dữ liệu và cần đưa cho ai đó
void strcpyCust(char* dest, char* src) {
	// Đi từ đầu đến cuối chuỗi gốc (chuỗi gửi dữ liệu)
	// Dấu <= để đảm bảo cả kí tự NULL cũng được đưa sang
	for (int i = 0; i < strlen(src); i++)
		// Sao chép từng phần tử sang
		dest[i] = src[i];
}