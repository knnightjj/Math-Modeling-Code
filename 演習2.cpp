#include <stdio.h>

#define N 5 /*変数Nを定義する*/
int main(void){

	double a[N];/*行列aの定義*/
	double b[N];/*行列bの定義*/
	int i;/*繰り返し作業の時使うint型変数*/

	for (i = 0; i < N; i++) {/*ループ開始*/
		a[i] = (double)i / 20;
		b[i] = (double)i / 10;
		printf("a[%d]+b[%d]=%.3f \n", i, i, a[i] + b[i]);/*結果を表示させる*/
	}
	
	return 0;/*プログラム終了*/
	}