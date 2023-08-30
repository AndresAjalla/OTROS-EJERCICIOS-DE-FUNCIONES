#include <stdio.h>
#include <stdlib.h>

void resultado (int unidades, int precio){
	int total=0;
	float descuento=0,precio_final=0;
	
	total= unidades*precio;
	
	if (unidades>6 && unidades<=12){
		descuento= (total*4)/100;
		precio_final= total-descuento;
		printf("\n TOTAL DE SU COMPRA: %f",precio_final);
	}
	else if (unidades>12){
		descuento= (total*10)/100;
		precio_final= total-descuento;
		printf("\n TOTAL DE SU COMPRA: %f",precio_final);
	}
	else {
		printf("\n TOTAL DE SU COMPRA: %d",total);
	}
	printf("\n");
	printf("\n DESCUENTO DE SU COMPRA: %f",descuento);
}
	
	int main() {
		
		int unidades, precio;
		
		printf("\n Ingrese cantidad de unidades: ");
		scanf ("%d",&unidades);
		printf("\n Ingrese precio del producto: ");
		scanf ("%d",&precio);
		
		resultado(unidades,precio);
		
		return 0;
	}
	
	
