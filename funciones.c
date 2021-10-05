//Desarrolo de funciones privadas y publicas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funciones.h"

//Metodo para la introducciona punteros 
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

//Metodo para el tratamineto de cadenas 
void arrays(){
	int lista[]= {24,30,15,25,18};
	int *p = &lista[0];
	printf("\t-Los valores de la lista con for: \n");
	//bucle de exploracion	
	for(int i=0; i<5; i++){
		// salcamos por pantalla los valores de la lista 
		printf("\t%d ",lista[i]);
		//printf("%d",*(lista+i));	//hace lo mismo que arriba 
		
	}
	printf("\n");
	printf("\t-Los valores de la lista con punteros *(p+1)): \n");
	//bucle de exploracion con punteros 
	for(int i=0; i<5; i++){
		//sacamos los valores por pantalla con punteros 
		//printf("\t%d",*(p+i));
		//printf("\t%d",*p++);	//hace los mismo que la de arriba
		printf("\t%d",p[i]);	//hace lo mismo que las otras dos  

	}

	printf("\n");
}

//Metodo para el tratamiento de cadenas de caracteres 
void cadenas(){
	char cad[40] = "Hola";
	char *pc = cad;
        printf("\t-Las cadenas de caracteres son: \n");	
	printf("\t%s\n",cad);
	pc = "Adios";
	printf("\t%s\n",pc);
	//copiamos en el array un nuevo contenido 
	strcpy(cad,"Adios");
	printf("\tAñadimos adios a cad y ahora cad vale: %s\n",cad);
	printf("\tImprimimos la primera letra donde apunta pc: %c\n",pc[1]);
	pc++;	//avanzamos el puntero una posicion mas 
	printf("\tAvanzamos el puntero una posicion y ahora pc vale: %s\n",pc);
	printf("\tAvanzamos el puntero 2 posiciones: %s\n",pc+2);
	printf("\tImprime A al realizar *--pc: %c\n",*--pc);
	printf("\tImprimimos i por pantalla *(cad+2): %c\n",*(cad+2));

}









