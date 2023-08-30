#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cant_dias(int mes);



int main()    {
	int mes;
	
	printf("\n ingrese un numero (del 1 al 12): ");
	scanf("%d",&mes);
	
	if (mes<1 || mes>12){
		printf("ERROR FECHA INVALIDA");
	}
	cant_dias(mes);
	
	return 0;
	
} 
void cant_dias(int mes){
	if (mes==1){
		printf("\n El mes que eligio es ENERO");	
	}
	else if (mes==2){
		printf("\n El mes que eligio es FEBRERO");	
	}
	else if (mes==3){
		printf("\n El mes que eligio es MARZO");	
	}
	else if (mes==4){
		printf("\n El mes que eligio es ABRIL");	
	}
	else if (mes==5){
		printf("\n El mes que eligio es MAYO");	
	}
	else if (mes==6){
		printf("\n El mes que eligio es JUNIO");	
	}
	else if (mes==7){
		printf("\n El mes que eligio es JULIO");	
	}
	else if (mes==8){
		printf("\n El mes que eligio es AGOSTO");	
	}
	else if (mes==9){
		printf("\n El mes que eligio es SEPTIEMBRE");	
	}
	else if (mes==10){
		printf("\n El mes que eligio es OCTUBRE");	
	}
	else if (mes==11){
		printf("\n El mes que eligio es NOVIEMBRE");	
	}
	else if (mes==12){
		printf("\n El mes que eligio es DICIEMBRE");	
	}
	else {
		printf("\n MES INVALIDO");
	}
	
	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes== 10 || mes==12){
		printf("\n Este mes tiene 31 dias");
	}
	else if (mes==4 || mes== 6 || mes==9 || mes== 11){
		printf("\n Este mes tiene 30 dias");
	}
	else if (mes==2){
		printf("\n Este mes tiene 29 dias");
	}
}
	
