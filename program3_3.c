#include <stdio.h>

double innerproduct(double x[3], double y[3]) {//���ς����߂�֐�
	int i;
	i = 0;
	double naiseki;//���ς̒l��ۑ�����ϐ�
	naiseki = 0;//�����l�ݒ�
	for (i = 0;i < 3;i++) {
		naiseki += x[i] * y[i];//���ς̌v�Z
	}

	return naiseki;
}
int main(void) {
	double a[3] = { 1.0,2.0,3.0 };//�s��a�̒�`
	double b[3] = { 6.0,4.0,4.0 };//�s��b�̒�`
	double c[3] = { 10.0,20.0,5.0 };//�s��c�̒�`
	double d[3] = { 6.0,5.0,10.0 };//�s��d�̒�`

	double ab;
	ab = innerproduct(a, b);//����ab�̌v�Z

	double cd;
	cd = innerproduct(c, d);//����cd�̌v�Z

	printf("innperproduct a�Eb=%.1f\n", ab);//���ʏo��
	printf("innperproduct c�Ed=%.1f\n", cd);//���ʏo��

	return 0;
}
