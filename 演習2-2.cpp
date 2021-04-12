#include <stdio.h>

int main(void) {
	double a[4][3];
	double b[3][4];
	double math[4][4];
	int i, j;
	i = j = 1;

	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 2; j++) {
			a[i][j] = 2.0 * (i + j);
		}
	}
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {
			b[i][j] = 3.0 * (i + j);
		}
	}
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			for (int k = 1; k <= 3; k++) {
				math[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("ab[%d][%d]=%.1f\n", i, j, math[i][j]);
		}
	}
	return 0;
}