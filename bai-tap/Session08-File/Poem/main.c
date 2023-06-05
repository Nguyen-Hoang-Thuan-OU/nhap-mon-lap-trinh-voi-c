#include <stdio.h>
#include <stdlib.h>

// Đề bài: ghi & đọc tập tin

// Ghi/Lưu - tải từ RAM xuống ổ đĩa
void writeFile();

// Đọc/Mở - nạp từ ổ đĩa lên RAM
void readFile();

int main(int argc, char *argv[]) {
	
	//writeFile();
	readFile();
	
	return 0;
}

// Đọc/Mở - nạp từ ổ đĩa lên RAM
void readFile() {
	// Truyền tên tập tin (từ-ấy.txt) và chế độ (read)
	FILE* f = fopen("tu-ay.txt", "r");
	
	// Biến để lưu một kí tự
	char ch;
	
	// Đọc từng kí tự trong tập tin
	// và in ra từng kí tự cho đến hết tập tin
	// End of File (EOF): cuối tập tin
	do {
		ch = fgetc(f);
		printf("%c", ch);
	} while (ch != EOF);
	
	fclose(f);
}

// Ghi/Lưu - tải từ RAM xuống ổ đĩa
void writeFile() {
	// Truyền tên tập tin (từ-ấy.txt) ở chế độ (write)
	// và nối đuôi (append)
	FILE* f = fopen("tu-ay.txt", "a");
	
	// Ghi dữ liệu xuống máy tính
	// (nằm chung trong thư mục chứa code)
	fprintf(f, "Tu ay trong toi bung code gao\n");
	fprintf(f, "Man hinh code do cua con tim\n");
	fprintf(f, "Hon toi ngap tran do-for-if\n");
	fprintf(f, "Rat nhi phan va day tieng do la\n");
	
	fclose(f);
	
	printf("The file is created successfully!");
}