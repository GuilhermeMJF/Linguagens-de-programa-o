#include <stdio.h>
int main()
{
	int num, s;
	printf("Digite um numero: ");	
	scanf("%d",&num);
	if(num % 5 == 0){
		printf("o numero %d e div por 5.");
	}
	else{
		printf("o numero %d nao e div por 5.");
	}

	return 0;
}                                                      

