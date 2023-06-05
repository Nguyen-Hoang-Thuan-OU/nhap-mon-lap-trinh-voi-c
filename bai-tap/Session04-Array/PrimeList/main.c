#include <stdio.h>
#include <stdlib.h>

// Đề bài: cho một mảng các số tự nhiên (nguyên dương)
//		   in ra những số nguyên tố xuất hiện trong mảng
//		   (bộ lọc - filter)

// Ví dụ: cho mảng 5, 10, 15, 23, 7, 9, 11, 13
//			-> Số nguyên tố: 5, 23, 7, 11, 13

// I: 
// P: duyệt qua từng phần tử [i] trong mảng
//	  và kiểm tra xem [i] có phải là số nguyên tố hay không
//	  hỏi lặp lại cho đến cuối mảng
//	  (hỏi lại nhiều lần và chuyện biệt -> tái sử dụng)
//		- Vấn đề lớn: kiểm tra và in ra các số nguyên tố
//			+ Vấn đề nhỏ 1: kiểm tra có phải nguyên tố?
//				I: 
//				P: chỉ có hai ước số là 1 và chính nó
//				O: có phải là số nguyên tố hay không?
//			+ Vấn đề nhỏ 2: in các số sau khi đã kiểm tra
// O: 


// 1. Hàm nhận vào một số n và trả về một số kiểu int
// Quy ước: kết quả xử lý của hàm
//			- Là số nguyên tố: 1
//			- Không phải là số nguyên tố: 0
//
//				Ví dụ:
//						y = isPrime(5) = 1
//						y = isPrime(10) = 0
int isPrime(int n);

// 2. Hàm nhận vào một mảng số dương và kích thước
// để in các số nguyên tố sau khi đã kiểm tra xong
void printPrimeList(int a[], int size);

int main(int argc, char *argv[]) {
	
	// Kiểm tra có phải là số nguyên tô hay không
//	printf("23 is prime or not?: %d\n", isPrime(23));
//	printf("101 is prime or not?: %d\n", isPrime(101));
//	printf("99 is prime or not?: %d\n", isPrime(99));
	
	// In ra những số nguyên tố xuất hiện trong mảng
	int a[] = {5, 10, 15, 23, 7, 9, 11, 13};
	printPrimeList(a, 8);
	
	return 0;
}

void printPrimeList(int a[], int size) {
	
	// Chứa kết quả có phải là nguyên tố hay không,
	// tương ứng với giá trị 0 hoặc 1 nhận từ hàm isPrime
	int result;
	
	// In toàn bộ mảng trước
	printf("The array has the values of:\n");
	for (int i = 0; i < size; i++)
		printf("%d\t", *(a + i)); // a[i]
	
	// Kiểm tra từng phần tử
	// xem có phải là số nguyên tố hay không
	printf("\nThe list of prime numbers found in this array is:\n");
	for (int i = 0; i < size; i++) {
		// Kết quả trả về của hàm isPrime là 1 hoặc 0
		result = isPrime(a[i]);
		
		// Nếu kết quả trả về là 1 thì in phần tử ra
		if (result == 1) // if (isPrime(a[i]) == 1)
			printf("%d\t", a[i]);
	}
}

// Quy tắc số nguyên tố: chỉ có hai ước số là 1 và chính nó
//							(chia hết cho 1 và chính nó)
//
// (Vì số nguyên tố bé nhất là 2, nên sẽ không tính 1)
//
// Thuật toán:
//		* Đếm số ước số (chia hết cho những số nào):
//			Ví dụ:
//					n % 1 (lấy dư = 0) -> 1 ước số
//					n % 2 (lấy dư = 0) -> 1 ước số
//					n % 3 (lấy dư = 0) -> 1 ước số
//					n % ...			   -> 1 ước số
//					n % n			   -> 1 ước số
//						-> Nhiều hơn 2 ước số thì loại

int isPrime(int n) {
	// Số ước số ban đầu khởi tạo là 0
	// để tránh giá trị rác, sau đó nhồi dần lên
	int divisorCount = 0;
	
	// Lấy số n để chia cho từng giá trị từ 1..n
	for (int i = 1; i <= n; i++)
		// Nếu n chia cho bất kì số nào
		// (tính từ 1..n) mà dư 0
		if (n % i == 0)
			// Nếu có chia hết cho i (số bất kì từ 1..n)
			// thì lập tức tăng ước số lên một đơn vị
			divisorCount++;
	
	// Nếu đúng là nguyên tố vì chỉ có hai ước số
	// thì trả về số 1 cho hàm -> trạng thái đúng
	if (divisorCount == 2)
		return 1;
	// Không phải số nguyên tố vì có nhiều hơn hai ước số
	// thì trả về số 0 cho hàm -> trạng thái sai
	return 0;
}