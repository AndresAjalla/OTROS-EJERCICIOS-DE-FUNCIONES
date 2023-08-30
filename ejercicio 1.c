#include <stdio.h>
#include <stdlib.h>


int SUMA (int num1, int num2){
	int sum;
	sum=num1+num2;
	
	return sum;
}
	void RESTA (int num1, int num2){
		int res;
		res = num1 - num2;
		printf("\n RESULTADO: %d",res);
	}
		float DIVI(int num1, int num2){
			
			float div,n1,n2;
			n1=num1;
			n2=num2;
			div = n1 / n2;
			
			return div;
		}
			
			
			int main() {
				
				int num1,num2,opcion,resultado;
				float r;
				printf("\n Ingrese un numero: ");
				scanf("%d",&num1);
				printf("\n Ingrese otro numero: ");
				scanf("%d",&num2);
				
				printf("\n ELIJA UNA OPCION");
				printf("\n");
				
				printf("\n 1.  SUMAR");
				printf("\n 2.  RESTAR");
				printf("\n 3.  MULTIPLICAR");
				printf("\n 4.  DIVISION");
				printf("\n");
				
				printf("\n ¿Que operacion desea realizar?:  ");
				scanf("%d",&opcion);
				
				if (opcion == 1){
					resultado=SUMA(num1,num2);
					printf("\n RESULTADO: %d",resultado);
				}
				else if (opcion == 2){
					RESTA(num1,num2);
				}
				else if (opcion == 3){
					printf("RESULTADO: %d",num1*num2);
				}
				else if (opcion == 4){
					r = DIVI(num1,num2);
					printf("RESULTADO: %f", r);
				}
				else {
					printf("\n ERROR");
					printf("\n Valor invalido");
				}
				
				system("pause");
				return 0;
			}
			
			
			
			
