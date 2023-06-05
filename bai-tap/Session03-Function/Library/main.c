#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Sử dụng hàm có sẵn

// 

int main(int argc, char *argv[]) {
	
	// Tính căn bậc hai của 100
	// double sqrt(double x)
	double result = sqrt(100);
	printf("Square Root (100) = %.2lf\n", result);
	printf("Square Root (100) = %.2f\n", sqrt(100));
	
	// Tính tổng căn bậc hai của √9 + √25 + √64
	double sum = sqrt(9) + sqrt(25) + sqrt(64);
	printf("The sum of v9 + v25 + v64 = %.2lf\n", sum);
	
	// Tính trị tuyệt đối của (-5)
	int absolute = abs(-5);
	printf("|-5| = %d\n", absolute);

	printf("|-50| = %d\n", abs(50));
	
	return 0;
}