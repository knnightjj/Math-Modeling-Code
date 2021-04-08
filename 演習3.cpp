#include <stdio.h>
#define N 5/*??NªòïÒëùª¹ªë*/

int main(void) {

	double a[N]; /*ú¼ÖªaªÎïÒëù*/
	double b[N]; /*ú¼ÖªbªÎïÒëù*/
	double sum;/*?îİªòğëª·ªÆª¤ª¯ª¿ªáªËéÄëòª¹ªë??*/
	sum = 0;/*ôøÑ¢ö·àâïÒ*/
	
	int i;/*ğÛªêÚ÷ª·íÂåöªÎãÁŞÅª¦intúş??*/

	for (i = 0; i < N; i++) {/*«ë?«×ËÒã·*/
		a[i] = (double)i / 20;
		b[i] = (double)i / 10;
		sum += a[i] * b[i];
	}
	printf("Inner Product of vector a,b=%f", sum);/*Ì¿ÍıªòøúãÆ*/

	return 0;
}