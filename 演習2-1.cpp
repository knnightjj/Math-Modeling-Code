#include <stdio.h>

int main(void) {

	double a[4][3];
	double b[4][3];
	int i = 1;
	int j = 1;
	double sum[4][3];
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 1; j++) {
			a[i][j] = 2.0 * (i + j);
			b[i][j] = 3.0 * (i + j);
			sum[i][j] = a[i][j] + b[i][j];

			printf("a+b[%d][%d]=%.1f\n", i+1, j+1, sum[i][j]);
		}
	}
	return 0;
}