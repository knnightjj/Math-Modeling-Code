#include <stdio.h>
#include <math.h>

#define N 5 /*変数Nを定義する*/
int main(void) {

	double a[N];/*行列aの定義*/
	int i;/*繰り返し作業の時使うint型変数*/
	double sum;
	sum = 0;
	double norum;
	norum = 0;

	for (i = 0; i < N; i++) {/*ループ開始*/
		a[i] = (double)i / 20;
		sum += a[i]*a[i];
	}
	norum = sqrt(sum);
	printf("aのノルム=%.3f", norum);

	return 0;/*プログラム終了*/
}