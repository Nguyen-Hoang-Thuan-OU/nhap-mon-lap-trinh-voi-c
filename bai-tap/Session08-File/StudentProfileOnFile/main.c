#include <stdio.h>
#include <stdlib.h>

// Đề bài: lưu một hồ sơ sinh viên xuống tập tin,
//		   sau đó mở hồ sơ lên để xem

// Từ RAM xuống ổ đĩa - Write / Output
void saveAChar();

// Từ ổ đĩa lên RAM - Read / Input
void openAChar();

// Sử dụng mẹo để đọc nhiều hơn 1 kí tự
void openChars();

// Sử dụng vòng lặp để đọc nhiều hơn 1 kí tự
void openCharsV2();

// Hàm lưu một đoạn văn được nhập từ bàn phím
void saveADocument();

int main(int argc, char *argv[]) {
	
//	saveAChar();
//	openAChar();
//	openChars();
//	openCharsV2();
	saveADocument();
	
	return 0;
}

// Nhập một đoạn văn từ bàn phím
// và sau đó lưu xuống tập tin trên ô đĩa
void saveADocument() {
	
	// Đón từng kí tự từ bàn phím
	char ch;
	
	// Dấu hiệu nhận biết để dừng nhập: [Ctrl] + [S]
	
	// Vì đây là cụm phím không được in ra màn hình (non-printable),
	// nên việc gõ chỉ mang ý nghĩa ra lệnh / tín hiệu nào đó
	
	// Theo thiết kế của máy tính,
	// tổ hợp phím cũng phải có một mã số
	// để máy tính biết phải làm gì tiếp theo
	//		-> Tổ hợp phím cũng có mã số ASCII (1 - 31)
	FILE* f = fopen("don-doi-nganh.txt", "w");
	
	// Nếu không thấy tổ hợp phím [Ctrl] + [S]
	// thì vẫn cho nhập tiếp kí tự
	// (Tổ hợp phím [Ctrl] + [S] trong bảng mã ASCII là 19)
	printf("You're required to input a document. Ctrl+S to stop & save your work!\n");
	do {
		// Nhập đến đâu thì in xuống tập tin đến đấy,
		// có thể gõ liên tục mà không cần nhấn [Enter]
		// để lưu vào biến giống như scanf()
		ch = getchar();
		
		// Sau khi đã có được từng kí tự,
		// ta chỉ việc ghi xuống tập tin
		// (Lưu các kí tự trong "ch" xuống tập tin "f")
//		fprintf(f, "%c", ch);
		fputc(ch, f);
	} while (ch != 19);
	
	fclose(f);
	
	printf("The document is saved successfully!\n");
}

// Sử dụng vòng lặp để đọc toàn bộ nội dung của tập tin
void openCharsV2() {
	char ch;
	FILE* f = fopen("char.txt", "r");
	
	printf("The char.txt contents: ");
	
	// Chưa gặp kí tự EOF thì vẫn tiếp tục lặp
	// để in từng kí tự ra
	do {
		ch = fgetc(f);
		printf("%c", ch);
	} while (ch != EOF);
	
	fclose(f);
}

// Sử dụng mẹo: gọi lệnh in một kí tự hai lần - fgetc()
//				vì biết chỉ có hai kí tự
void openChars() {
	char ch;
	FILE* f = fopen("char.txt", "r");
	
	printf("The char.txt contents: ");
	
	// Đọc trước 1 kí tự rồi sau đó in ra
	
	// Con trỏ ngầm sẽ tự nhích sang một Byte
	// sau khi đọc xong một kí tự	
	ch = fgetc(f);
	printf("%c", ch);
	
	// Đọc thêm 1 kí tự nữa kế rồi
	// rồi tiếp tục in ra
	ch = fgetc(f);
	printf("%c", ch);
	
	fclose(f);
}

// Mở tập tin để xem nội dung bằng code
// (Từ ổ đĩa lên RAM - Read / Input)
void openAChar() {
	
	char ch;
	
	// Mở tập tin lên để xem
	FILE* f = fopen("char.txt", "r");
	
	// Nhớ kiểm tra xem f có NULL hay không
	// (Sẽ tính sau)
	
	// Hàm fgetc() sẽ đọc một kí tự trong tập tin,
	// sau đó trả về một số nguyên và lưu vào biến char,
	// đây chính là mã ASCII của kí tự
	ch = fgetc(f);
	
	printf("The char.txt contents: %c", ch);
	
	fclose(f);
}

// Lưu một tập tin xuống ổ đĩa
// (Từ RAM xuống ổ đĩa - Write / Output)
void saveAChar() {
	
	// Thử lưu kí tự '$' xuống tập tin
	char ch = '$';
	
	// Con trỏ f trỏ đến dãy Byte
	// để sẵn sàng lưu tập tin
	// w: tạo mới tập tin trên ổ đĩa,
	//	  xoá luôn tập tin cũ nếu đã có sẵn
	FILE* f = fopen("char.txt", "a");
	
	// Sẽ có tình huống không xin được con trỏ,
	// (f không thể trỏ được đến đầy dãy Byte)
	// Lúc này, f == NULL
	
	// Nhưng có xem như là đã xin được
	
	// Truyền vào con trỏ f để biết nơi cần lưu tập tin,
	// sau đó truyền vào biến kiểu char đang lưu kí tự '$'
	// (Lưu kí tự '$' xuống tập tin "char.txt")
	fprintf(f, "%c", ch);
	// Nếu muốn lưu nhiều kí tự
	// thì chỉ việc sử dụng hàm fprintf() nhiều lần
	
	// Báo với hệ điều hành rằng
	// đã kết thúc việc tương tác với tập tin
	fclose(f);
}