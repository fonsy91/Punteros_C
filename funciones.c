//Desarrolo de funciones privadas y publicas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funciones.h"

void operaciones(){
	int x[10] = {10,20,30,40,50,60,70}, b, *pa, *pb; 
	pa = &x[5];	//apunta a la posicion 5 del vector 
	//suma una posicion mas donde esta apuntando y le da el valor a la variable b
	b = *pa + 1; // b=61
	printf("\tEL valor de b es: %d\n",b);
	b = *(pa+1);
	printf("\tEL valor de b es: %d\n",b);
	pb = &x[3];
	b = pb - pa;	//distancia entre los datos pb y pa (-2)
	printf("\tEL valor de b es: %d\n",b);
	*pb = 0;
	*pb += 2;	//adelantamos 2 posicones de donde apunta +
	(*pb)--;	//x[3]-- decrementa el apuntador una posicion anterior 
	printf("\tEL valor de *pb  es: %d\n",*pb);
	x[0] = *pb--;	//x[0]=x[3] y pb se decrementea en un osea punta a un elemento anterior
	x[2] = *--pb; 
	printf("\tEL valor de x[2] es: %d\n",x[2]);
	if(pb > pa-5){	//cierto 20 > 10 
		b=0; 
	}
	printf("\n");

}

void arrays(){
	int lista[]= {24,30,15,25,18};
	int *p = &lista[0];
       	printf("\t");
	//bucle de exploracion	
	for(int i=0; i<5; i++){
		// salcamos por pantalla los valores de la lista 
		printf("%d ",lista[i]);
		//printf("%d",*(lista+i));	//hace lo mismo que arriba 
		
	}
	//bucle de exploracion con punteros 

	printf("\n");
}



