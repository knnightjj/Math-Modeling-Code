#include <stdio.h>
#define N 5/*??N����������*/

int main(void) {

	double a[N]; /*��֪a������*/
	double b[N]; /*��֪b������*/
	double sum;/*?�ݪ��몷�ƪ�����������򪹪�??*/
	sum = 0;/*��Ѣ������*/
	
	int i;/*�۪��������������Ū�int��??*/

	for (i = 0; i < N; i++) {/*��?�����*/
		a[i] = (double)i / 20;
		b[i] = (double)i / 10;
		sum += a[i] * b[i];
	}
	printf("Inner Product of vector a,b=%f", sum);/*̿��������*/

	return 0;
}