#include <stdio.h>
#include <stdlib.h>

void result() {
	int asteriscos=1,lineas,ast=1;
	printf("\n ingrese la cantidad de lineas: ");
	scanf("%d",&lineas);
	
	for (asteriscos=1;asteriscos<=lineas;asteriscos++){
		for (ast=1;ast<=asteriscos;ast++){
			printf("*");
			
		}
		printf("\n");
	}
}
int main (){
	
	result();
	return 0;
}
	
	
