#include <stdio.h>
#include <stdlib.h>

void resultado(int num1){
	int a,b,result;
	a=num1*num1;
	b=2*num1;
	result=a-b;
	printf("\n RESULTADO: %d",result);
}
	
	int main() {
		
		int num1;
		printf ("\n Ingrese un numero: ");
		scanf("%d",&num1);
		
		resultado(num1);
		
		return 0;
	}
	
	
