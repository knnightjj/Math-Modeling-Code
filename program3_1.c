# include <stdio.h>
#define M 2
#define N 3

int main(void) {
	int a[M][N] = { {10,13,29},{12,30,23} };//�s��a�̒�`
	int saidai;	//�֐��̖߂�l��ۑ�����ϐ�

	saidai = max_finder(a);//�֐��̎��s

	printf("�ő�l=%d\n", saidai);//���ʂ̕\��

	return 0;//�v���O�����I��
}

int max_finder(int a[M][N]) {
	int i, j;
	int max = 0;//�ϐ��̏����l�ݒ�

	for (i = 0; i < 2; i++) {//�ő�l��T�����
		for (j = 0; j < 3; j++) {
			if (max < a[i][j]) {//�ő�l��T����������
				max = a[i][j];
			}
		}
	}
	return max;//�֐��̖߂�l
}