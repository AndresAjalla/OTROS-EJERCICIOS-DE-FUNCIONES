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
		printf("\n RESULTADO DE LA RESTA: %d",res);
	}
		float DIVI(int num1, int num2){
			
			float div,n1,n2;
			n1=num1;
			n2=num2;
			div = n1 / n2;
			
			return div;
		}
			
			void resul (int num1, int num2,int op, int op2, int op3, int op4,int op5);		
			
			int main() {
				
				char deci1,deci2,deci3,deci4;
				int num1,num2,op,op2,op3,op4,op5,resultado,i=1;
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
				scanf("%d",&op);
				printf("\n");
				printf("¿Desea realizar otra operacion?Y/N:  ");		
				scanf("%s",&deci1);
				
				if (deci1=='Y' || deci1=='y'){
					printf("\n ¿Que operacion desea realizar?:  ");
					scanf("%d",&op2);
					printf("\n");
					printf("¿Desea realizar otra operacion?Y/N:  ");		
					scanf("%s",&deci2);
				}
				else if (deci1== 'N' || deci1=='n'){
					resul(num1,num2,op,op2,op3,op4,op5);
				}
				
				if (deci2== 'Y' || deci2=='y'){
					printf("\n ¿Que operacion desea realizar?:  ");
					scanf("%d",&op3);	
					printf("\n");
					printf("¿Desea realizar otra operacion?Y/N:  ");		
					scanf("%s",&deci3);
				}
				else if (deci2== 'N' || deci2=='n'){
					resul(num1,num2,op,op2,op3,op4,op5);	
				}
				if (deci3== 'Y' || deci3=='y'){
					printf("\n ¿Que operacion desea realizar?:  ");
					scanf("%d",&op4);	
					printf("\n");
					printf("¿Desea realizar otra operacion? Y/N:  ");		
					scanf("%s",&deci4);
				}
				else if (deci3== 'N' || deci3=='n'){
					resul(num1,num2,op,op2,op3,op4,op5);
				}
				if (deci4== 'Y' || deci4=='y'){
					printf("\n ¿Que operacion desea realizar?:  ");
					scanf("%d",&op5);	
				}
				else if (deci4== 'N' || deci4=='n'){
					resul(num1,num2,op,op2,op3,op4,op5);
				}	
				return 0;
			}
			void resul (int num1, int num2,int op, int op2, int op3, int op4,int op5){
				int resultado;
				float r;
				if (op == 1 || op2 == 1 || op3 == 1 || op4 == 1 || op5 == 1){
					resultado=SUMA(num1,num2);
					printf("\n RESULTADO DE LA SUMA: %d",resultado);
				}	
				if (op == 2 || op2 == 2 || op3 == 2 || op4 == 2 || op5 == 2){
					RESTA(num1,num2);
				}
				if (op == 3 || op2 == 3 || op3 == 3 || op4 == 3 || op5 == 3){
					printf("\n RESULTADO DE LA MULTIPLICACION: %d",num1*num2);
				}
				if (op == 4 || op2 == 4 || op3 == 4 || op4 == 4 || op5 == 4){
					r = DIVI(num1,num2);
					printf("\n RESULTADO DE LA DIVISION: %f", r);
				}
				
			}
				
