#include <stdio.h>

#define N 5/*変数Nの値を定義する*/

int main(void) {
	double a[N];/*行列aを定義する*/
	int i;/*繰り返し作業の時使う一時変数を置く*/
	double max;/*最大値を保存するための変数maxを宣言*/
	max = 0;/*maxの初期値を設定*/

	for (i = 0; i < N; i++) {/*ループ開始*/
		a[i] = (double)i / 20;
		if (a[0]<a[i]) {/*最大値を探して行くための作業*/
			max = a[i];
		}
	}
	printf("最大値max=%.3f", max);/*最大値の表示*/

	return 0;/*プログラム終了*/
}