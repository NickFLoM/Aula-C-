#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float x, n, rs, rr ;
	printf("CAlculo de X e N");
	printf("Digite o valor de X \n");
	scanf("%f", &x);
	printf("Digite o valor de N \n");
	scanf("%f", &n);
	rs = (x*n);
	rr = pow(rs,2);
	printf("O resultado é %.1f", rr);
	return 0;
	
}
