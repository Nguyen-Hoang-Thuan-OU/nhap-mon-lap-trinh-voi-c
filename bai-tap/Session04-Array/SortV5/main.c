#include <stdio.h>
#include <stdlib.h>

// Đề bài: sắp xếp một mảng số nguyên theo thứ tự giảm dần

// Hàm hoán đổi hai biến,
// sử dụng hàm void vì có đến tận hai giá trị trả về
//void swap(int a, int b);

// Sử dụng hai biến con trỏ cho hàm hoán đổi
// để bên trong hàm nếu có hoán đổi giá trị
// thì nơi gọi hàm cũng sẽ thay đổi theo
void swap(int* a, int* b);

// Hàm nhận vào một mảng có kích thước (size) bất kì,
// số lượng phần tử sử dụng để duyệt mảng trong lệnh for,
// sau đó nó sẽ sắp xếp giảm dần và in ra kết quả
//void sortArray(int* a, int size); // Sẽ học sau
void sortArray(int a[], int size);

int main(int argc, char *argv[]) {
	
//	int x = 10, y = 100;
//	printf("Before swapping, x = %d; y = %d\n", x, y);
//	
//	swap(&x, &y);
//	printf("After swapping, x = %d; y = %d\n", x, y);

	int n[] = {5, -10, -15, 20, -25, 1000};
	sortArray(n, 6);
	
	return 0;
}

// Hàm có hai tham số đầu vào,
// một là mảng nhưng không khai báo trước kích thước
// và hai là kích thước (size)
// để có thể duyệt mảng và dừng vòng lặp for
//	-> Hai đầu vào thì có 2 biến
void sortArray(int a[], int size) {
	int t;
	
	// In mảng trước khi tiến hành sắp xếp giảm dần
	printf("The array before sorting descending is:\n");
	for (int i = 0; i < size; i++)
		printf("%d\t", *(a + i));
		//rintf("a[%d] = %d\n", (i + 1), a[i]);
	
	// Tiến hành sắp xếp mảng
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (a[i] < a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
				// Gọi hàm swap() để hoán đổi vị trí
				// mỗi khi điều kiện trong if đúng
				swap(&a[i], &a[j]);
	
	// In mảng sau khi đã tiến hành sắp xếp giảm dần
	printf("\nThe array after sorting descending is:\n");
	for (int i = 0; i < size; i++)
		printf("%d\t", *(a + i));
		//rintf("a[%d] = %d\n", (i + 1), a[i]);
}

//          &a[i]   &a[j]
//            &x      &y
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}