#include <stdio.h>
#include <stdlib.h>

// Đề bài: nhập từ bàn phím một mảng gồm 10 phần tử,
//		   kiểm tra xem có bao nhiêu số chẵn
//		   và tính tổng các số lẻ

// I: một mảng 10 phần tử

// P: duyệt mảng
//		- Nếu phần tử [i] không chẵn thì mặc kệ
//		- Nếu phần tử [i] chẵn thì
//			count++
//			sum = sum + [i]
//			(nếu chẵn thì lấy luôn giá trị để nhồi vào)

// O: 

int main(int argc, char *argv[]) {
	
	// Khai báo mảng a với 10 phần tử
	// cùng với biến evenCount để đếm số chẵn
	// và biến sumOdd để tính tổng số lẻ
	int a[10], evenCount = 0, sumOdd = 0;
	
	// Nhập số 10 từ bàn phím
	printf("Please input 10 numbers:\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", (i + 1));
		scanf("%d", &a[i]);
	}
	
	// In ra 10 phần tử vừa nhập từ bàn phím
	printf("\nYou have just input the following numbers:\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	
	// Xuống hàng sau khi in mảng xong
	printf("\n\n");
		
	// Duyệt mảng, cùng lúc vừa đếm vừa tính tổng
	// vì mỗi lần duyệt mảng thì ta có giá trị của biến [i]
	// và ta có quyền tương tác với biến [i] này
	for (int i = 0; i < 10; i++) {
		// Hỏi từng [i]
		if (a[i] % 2 == 0)
			// Lập tức đếm và tăng khi gặp biến chẵn
			evenCount++;
		else
			// Lập tức cộng nhồi khi gặp biển lẻ
			sumOdd += a[i];
	}
	
	printf("There is/are %d even number(s) in this array\n", evenCount);
	printf("The sum of odd number(s) in this array is: %d\n", sumOdd);
	
	return 0;
}