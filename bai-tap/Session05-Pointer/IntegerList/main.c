#include <stdio.h>
#include <stdlib.h>

// Đề bài: viết hàm để lưu và in ra một mảng gồm 5 con số nguyên
//		   5, -10, 15, -20, 25

// Mảng tĩnh, được nằm trong Stack
void printIntegerList();

// Mảng động, xin một vùng RAM trong Heap để lưu dữ liệu
// nhưng không cần phải khai báo biến và đặt tên vùng RAM
void printIntegerListHEAP();

void printIntegerListHEAPV2();

int main(int argc, char *argv[]) {
	
	//printIntegerList();
	
	//printIntegerListHEAP();
	
	printIntegerListHEAPV2();
	
	return 0;
}

void printIntegerListHEAPV2() {
	int* p;
	
	p = (int*)malloc(20);
	
	*p = 5; // p[0] = 5;
	*(p + 1) = 10; // p[1] = 10;
	*(p + 2) = 15; // p[1] = 15;
	*(p + 3) = 20; // p[1] = 20;
	*(p + 4) = 25; // p[1] = 25;
	
	printf("The array has values of (Heap):\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", *(p + i));
}

void printIntegerListHEAP() {
	// Đây là biến con trỏ, nằm ở trong vùng Stack,
	// phải có cách để nó vượt ra khỏi Stack và trỏ đến Heap
	int* p;
	
	// Xin cấp một vùng RAM 20 Byte trong Heap
	// và quản lý bằng phần tử đầu tiên giống như mảng
	p = (int*)malloc(20);
	
	//Gán giá trị cho các cụm Byte số nguyên (4 Byte)
	p[0] = 1;
	p[1] = 1;
	p[2] = 2;
	p[3] = 3;
	p[4] = 5;
	
	// In ra "mảng"
	printf("The array has values of (Heap):\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", p[i]);
}

void printIntegerList() {
	// Mảng tĩnh, nằm ở trong hàm
	// 5 biến x 4 Byte = chiếm 20 Byte trong Stack
	int a[] = {5, -10, 15, -20, 25};
	
	printf("The array has values of:\n");
	for (int i = 0; i < 5; i++)
		//printf("%d\t", a[i]);
		printf("%d\t", *(a + i));
		
	printf("\n");
}