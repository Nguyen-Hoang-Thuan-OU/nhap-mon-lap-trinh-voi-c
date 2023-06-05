#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Đề bài: viết hàm để lưu chuỗi

// Khai báo chuỗi kiểu mảng kí tự
// và phải tự thủ công chèn kí tự '\0' (NULL) vào cuối chuỗi
void storeName();

// Khai báo chuỗi kiểu ngắn gọn ""
// và kí tự '\0' (NULL) sẽ được tự động chèn
void storeNameV2();

// Xử lý chuỗi: đổi kí tự từ thường sang hoa
void storeNameV3();

// Xử lý chuỗi: đổi kí tự từ thường sang hoa
//				(chỉ đổi từ a-z)
void storeNameV4();

// Xử lý chuỗi: đổi chuỗi từ thường sang hoa
//				bằng hàm có sẵn
void storeNameV5();

// Nhập chuỗi từ bàn phím và in ra câu chào
void storeNameV6();

// Nhập chuỗi từ bàn phím và nhập lố chiều dài
void storeNameV7();

// Nhập chuỗi từ bàn phím nhưng có giới hạn độ dài
// và chấp nhận luôn cả khoảng trắng
void storeNameV8();

// Nhập chuỗi từ bàn phím nhưng không giới hạn độ dài
void storeNameV9();

// Gán giá trị cho chuỗi/mảng
void storeNameV10();

int main(int argc, char *argv[]) {
	
	//storeName();
	
	//storeNameV2();
	
	//storeNameV3();
	
	//storeNameV4();
	
	//storeNameV5();
	
	//storeNameV6();
	
	//storeNameV7();
	
	//storeNameV8();
	
	//storeNameV9();
	
	storeNameV10();
	
	return 0;
}

// Gán giá trị cho chuỗi/mảng
void storeNameV10() {
	// Gán giá trị ngay khi khai báo
	char n1[50] = "Ahihi";
	
	// Gán từng kí tự và kết thúc bằng NULL (kí tự)
	char n2[50] = {'A', 'h', 'i', 'h', 'i', '\0'};
	
	// Gán từng kí tự và kết thúc bằng NULL (mã ASCII)
	char n3[50] = {'A', 'h', 'i', 'h', 'i', 0};
	
	// Khai báo trước nhưng sẽ gán sau
	char name[50];
	
	// Không cho vì cách này chỉ sử dụng được cho biến đơn
	// hoặc khi vừa khai báo và vừa gán
	//name = "Ahihi";
	
	// Hai mảng (con trỏ) cũng không thể gán giá trị cho nhau
	// vì đều có chung nhiệm vụ trỏ đến phần tử đầu tien
	//name = n1;
	
	// Sử dụng hàm có sẵn để sao chép giá trị của chuỗi
	strcpy(name, n1);
	// Vào mảng n1 và sao chép từng kí tự
	// rồi đưa sang cho mảng name, kể cả kí tự NULL
	
	printf("After copy the string, name now is: \n");
	puts(name);
}

// Nhập chuỗi từ bàn phím nhưng không giới hạn độ dài
void storeNameV9() {
	char name[50];
	
	printf("Input your name: ");
	// Câu lệnh nhập vào, tương đương với scanf()
	gets(name);
	// In ra (trong trường hợp này là chuỗi vừa nhập)
	// rồi sau đó tự động xuống dòng,
	// gần tương đương với printf()
	puts(name);
	
	printf("Your name is: %s", name);
}

// Nhập chuỗi từ bàn phím nhưng có giới hạn độ dài
// và chấp nhận luôn cả khoảng trắng
void storeNameV8() {
	int yob = 2000;
	char name[10];
	
	// Xem giá trị và địa chỉ RAM của biến
	printf("yob value: %d; yob address: %u\n", yob, &yob);
	printf("name[0] address: %u\n", name); // &name[0]
	
	// Mảng chỉ có 10 kí tự và phải chừa một vị trí
	// cho cho kí tự NULL để kết thúc,
	// nên chỉ có thể nhận tối đa 9 kí tự
	printf("Input your name: ");
	scanf("%9[^\n]", name);
	
	printf("Hi, %s\n", name);
	printf("yob: %d\n", yob);
}

// Nhập chuỗi từ bàn phím và nhập lố chiều dài
void storeNameV7() {
	int yob = 2000;
	char name[10]; // Tên ngắn cho dễ đối chiếu
	
	// Xem giá trị và địa chỉ RAM của biến
	printf("yob value: %d; yob address: %u\n", yob, &yob);
	printf("name[0] address: %u\n", name); // &name[0]
	
	// Nhập tên, nhưng nếu nhập nhiều hơn 10 kí tự
	// thì sẽ ảnh hướng đến biến phía sau,
	// cho nên phải giới hạn độ dài khi nhập
	printf("Input your name: ");
	scanf("%[^\n]", name);
	
	printf("Hi, %s\n", name);
	printf("yob: %d\n", yob);
}

// Nhập chuỗi từ bàn phím và in ra câu chào
void storeNameV6() {
	char name[50];
	
	printf("Input your name: ");
	//scanf("%s", name);
	// Khi sử dụng %s,
	// nó sẽ hiểu khoảng trắng là một điểm dừng,
	// nên nếu trong tên nhập vào có khoảng trắng
	// thì khi in ra tên sẽ bị thiếu
	
	scanf("%[^\n]", name);
	
	printf("Hi, %s\n", name);
}

// Đổi chuỗi từ thường sang hoa bằng hàm có sẵn
void storeNameV5() {
	char name[50] = "hoang$thuan";
	
	printf("The name before uppercase: %s\n", name);
	
	// Hàm đổi chuỗi từ thường sang hoa
	// Truyền vào hàm một biến tham chiếu/con trỏ
	strupr(name);
	
	printf("The name after uppercase: %s\n", name);
}

// Đổi kí tự từ thường sang hoa
// (chỉ đổi từ a-z)
void storeNameV4() {
	char name[50] = "hoang.thuan";
	printf("The name before uppercase: %s\n", name);
	
	// Chỉ đổi từ thường thành hoa nếu là kí tự từ a-z
	for (int i = 0; i < strlen(name); i++)
		//if (name[i] >= 97 && name[i] <= 122)
		if (name[i] >= 'a' && name[i] <= 'z')
			name[i] -= 32;
	
	printf("The name after uppercase: %s\n", name);
}

// Đổi kí tự từ thường sang hoa
void storeNameV3() {
	// Muốn đổi toàn bộ chuỗi trong đây thành chữ hoa
	// (trong bảng mã ASCII,
	//  kí tự thường cách kí tự hoa 32 đơn vị)
	char name[50] = "hoang.thuan";
	
	// Vì name bây giờ đã là một chuỗi
	// chứ không còn là kí tự,
	// nên nếu sử dụng tênChuỗi + %c
	// thì sẽ nhận về một địa chỉ trong RAM,
	// còn nếu sử dụng *tênChuỗi + %c
	// thì sẽ nhận về một giá trị (ở đây là kí tự)
	
	// Trong khi đó, nếu chỉ sử dụng tênChuỗi + %s
	// thì mặc dù giá trị tuyền vào vẫn là con trỏ (tên chuỗi),
	// nhưng %s sẽ tự động chuyển đổi thành giá trị
	// (ở đây là toàn bộ chuỗi)
	printf("The name before uppercase: %s\n", name);
	
	// Đổi kí tự thường sang hoa
	// bằng cách quét qua tất cả các kí tự,
	// lấy từng kí tự một ra và - 32 đơn vị
	for (int i = 0; i < strlen(name); i++)
		name[i] -= 32;
	// (kết quả chạy sẽ sai
	//  khi có một số kí tự
	//  không thuộc bảng chữ cái a-z)
	
	printf("The name after uppercase: %s\n", name);
}

// Khai báo chuỗi kiểu ngắn gọn ""
void storeNameV2() {
	// Cấp phát chuỗi/mảng có 50 Byte
	char name[50] = "E't-o-e't";
	printf("Your name: %s\n", name);
	printf("The length of your name: %d\n", strlen(name));

	// Kiểm tra phần còn lại nằm sau NULL của chuỗi/mảng
	// đang chứa những giá trị gì
	printf("The rest of the array after NULL:\n");
	for (int i = 0; i < 50; i++)
		printf("ahihi %c", name[i]);
}

// Khai báo chuỗi kiểu mảng kí tự
void storeName() {
	//int     a[] = { 1,   2,   3,    4,   5,   6};
	char name[50] = {'S', 'O', 'S', '\0', '$', '#'};
	//				 ------------- Chuỗi
	//				 ----------------------------- Mảng kí tự
	
	//char name[] = {65, 'O', 'S', 0, '$', '#'}; // AOS

	// Hàm xem độ dài của chuỗi
	int len = strlen(name);
	printf("The length of your name: %d\n", len);

	// * In chuỗi
	printf("Your name: %s\n", name);
	// %s sẽ quét chuỗi/mảng cho đến khi gặp kí tự NULL
	// báo hiệu rằng: "Đã kết thúc chuỗi" thì dừng,
	// và không cần phải đi hết mảng
	// vì mảng được sử dụng cho tối đa
	
	// * In mảng
	// Để in được những kí tự ở sau NULL,
	// thì chỉ cần sử dụng for để duyệt qua
	// từng phần tử trong mảng như bình thường
	printf("\nYour name (printed by using for)\n");
	for (int i = 0; i < 6; i++)
		printf("%c", name[i]); // a[i], p[i]
		// SOS$#
}