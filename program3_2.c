#include <stdio.h>

void add(double x[][3], double y[][3]) {//和を求める関数add

	int i, j;
	double sum[2][3];//行列の和を保存する行列
	sum[0][0] = 0;//初期値設定

	for (i = 0;i < 2;i++) {//和を求めて保存する作業
		for (j = 0;j < 3;j++) {
			sum[i][j] = x[i][j] + y[i][j];
		}
		printf("%.1f %.1f %.1f\n", sum[i][0], sum[i][1], sum[i][2]);
		//行列の和の出力
	}

}
	
int main(void) {
	double a[2][3] = { {1,2,3,},{4,5,6} };//行列aを定義
	double b[2][3] = { {1,2,3,},{4,5,6} };//行列bを定義
	double c[2][3] = { {10,15,20},{25,30,35} };//行列cを定義
	double d[2][3] = { {30,20,10},{5,15,20} };//行列dを定義

	printf("a+bは\n");//結果の出力
	add(a, b);//行列aと行列bの和
	printf("b+dは\n");//結果の出力
	add(c, d);//行列cと行列dの和


	return 0;//プログラム終了

}

