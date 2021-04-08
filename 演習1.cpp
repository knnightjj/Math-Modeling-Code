#include <stdio.h>
#define N 5/*変数Nを定義する*/

int main(void) {
	
	double a[N];/*行列aの定義*/
	int i;/*繰り返し作業の時使うint型変数*/

	for (i = 0; i < N; i++) {/*ループ開始*/
		a[i] = i / 2;
		printf("a[%d]=%.3f \n", i, a[i]);/*結果を表示させる*/
	}
	return 0;/*プログラム終了*/
}