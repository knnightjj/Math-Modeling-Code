# include <stdio.h>
#define M 2
#define N 3

int main(void) {
	int a[M][N] = { {10,13,29},{12,30,23} };//行列aの定義
	int saidai;	//関数の戻り値を保存する変数

	saidai = max_finder(a);//関数の実行

	printf("最大値=%d\n", saidai);//結果の表示

	return 0;//プログラム終了
}

int max_finder(int a[M][N]) {
	int i, j;
	int max = 0;//変数の初期値設定

	for (i = 0; i < 2; i++) {//最大値を探す作業
		for (j = 0; j < 3; j++) {
			if (max < a[i][j]) {//最大値を探す条件文章
				max = a[i][j];
			}
		}
	}
	return max;//関数の戻り値
}