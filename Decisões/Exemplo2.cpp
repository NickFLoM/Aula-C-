#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
float n1,n2,md;
printf("digite a primeira nota: ");
scanf("%f",&n1);
printf("digite a segunda nota: ");
scanf("%f",&n2);
md=(n1+n2)/2;
if (md>=5){
	printf("aluno alcancou a media: %.2f \n", md);
	printf ("aprovado");
	}
else {
	printf("aluno nao alcancou a media: %.2f \n", md);
	printf ("reprovado");
	    }
 system("PAUSE");
 return 0;
}

