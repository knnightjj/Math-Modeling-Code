#include <stdio.h>

double innerproduct(double x[3], double y[3]) {//内積を求める関数
	int i;
	i = 0;
	double naiseki;//内積の値を保存する変数
	naiseki = 0;//初期値設定
	for (i = 0;i < 3;i++) {
		naiseki += x[i] * y[i];//内積の計算
	}

	return naiseki;
}
int main(void) {
	double a[3] = { 1.0,2.0,3.0 };//行列aの定義
	double b[3] = { 6.0,4.0,4.0 };//行列bの定義
	double c[3] = { 10.0,20.0,5.0 };//行列cの定義
	double d[3] = { 6.0,5.0,10.0 };//行列dの定義

	double ab;
	ab = innerproduct(a, b);//内積abの計算

	double cd;
	cd = innerproduct(c, d);//内積cdの計算

	printf("innperproduct a・b=%.1f\n", ab);//結果出力
	printf("innperproduct c・d=%.1f\n", cd);//結果出力

	return 0;
}
