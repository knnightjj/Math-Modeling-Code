#include <stdio.h>

void add(double x[][3], double y[][3]) {//�a�����߂�֐�add

	int i, j;
	double sum[2][3];//�s��̘a��ۑ�����s��
	sum[0][0] = 0;//�����l�ݒ�

	for (i = 0;i < 2;i++) {//�a�����߂ĕۑ�������
		for (j = 0;j < 3;j++) {
			sum[i][j] = x[i][j] + y[i][j];
		}
		printf("%.1f %.1f %.1f\n", sum[i][0], sum[i][1], sum[i][2]);
		//�s��̘a�̏o��
	}

}
	
int main(void) {
	double a[2][3] = { {1,2,3,},{4,5,6} };//�s��a���`
	double b[2][3] = { {1,2,3,},{4,5,6} };//�s��b���`
	double c[2][3] = { {10,15,20},{25,30,35} };//�s��c���`
	double d[2][3] = { {30,20,10},{5,15,20} };//�s��d���`

	printf("a+b��\n");//���ʂ̏o��
	add(a, b);//�s��a�ƍs��b�̘a
	printf("b+d��\n");//���ʂ̏o��
	add(c, d);//�s��c�ƍs��d�̘a


	return 0;//�v���O�����I��

}

