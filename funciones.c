//Desarrolo de funciones privadas y publicas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
//Librerias para socket
//#include <linux/if_packet.h>
//#include <net/ethernet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <time.h>
#include <netinet/in.h>
#include <netinet/ip.h>

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

//Declaracion: TipoDatoApuntado *nombre[numElementos];
//Se usan para manipular un array de datos de dos dimensiones matriz
void arraysPunteros(){
	float a[5][4]; 
	int b[3][3]={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	float *p[5]; 
	int *pi[3];
	int i,j; 
	/*
	for (i = 0; i < 5; i++){
		p[i] = &a[i][0];	//tambien sirve p[i]=a[i]
	}
	printf("\tIntroduce lso datos del array...\n");
	//recorrremos y agregaamos sin punteros solo con bucles 
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			scanf("%f",&a[i][j]);
			//scanf("%f",p[i][j]);	//con punteros
		}
	}
	printf("\t\nLos datos introducidos son: \n");
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			printf("%g\t",p[i][j]);
			printf("\n");
		}
	}
	*/
	//apunta a los primeros elementos de las filas en orden [0][0], [1][0], [2][0]
	for(i=0; i<3; i++){
		pi[i] = &b[i][0];
	}

	for (i = 0; i < 3; i++){
		for ( j = 0; j < 3; j++){
			printf("\t%d",pi[i][j]);
		}
		printf("\n");
	}
}

//Ordenacion de array de cadenas por orden alfabetico 
void arrayOrdenado(){
	
	char a[3][5];	//numero de cadenas y longitud de las mismas  
	char *pc[] = {"Jose","Ana","Alberto","Sonia"};
	char **q = pc; //puntero que apunta a otro puntero que es *pc
	char *p[3];	//puntero para apuntar a 3 posiciones array de punteros simples 
	int i,j,n;
	
	//bucle para conectar los punteros con las filas del array 
	
	for (i = 0; i < 3; i++){
		p[i]=&a[i][0];
	}
	printf("\tRellenamos la matriz...\n");
	//rellenamos el array 
	for (j  = 0; j < 3; j++){
		printf("\tIngrese un nombre: ");
		scanf("\t%s",&a[j]);	
	}
	
	printf("\tLos datos introducidos son: \n");
	for (i=0; i<3; i++) printf("\t%s\n", a[i]);

	/* Una forma de rellenar 
	for (i=0; i<3; i++)
	if (gets(a[i])==NULL) break;
	n = i; //n = cantidad de cadenas introducidas
	printf("\nLas cardenas introducidas inicialmente son...\n"); 
	for (i=0; i<n; i++){
		printf("%s\n", a[i]);
	} 
	*/

	printf("\tManipulamos un array de punteros simples: \n");
	printf("\tLa salida de q[0]=%s\n",q[0]);
	printf("\tLa salida de q[0][0]=%c\n",q[0][0]);

	//Declaracion de punteros genericos 
	//void *NOmbrePuntero
}

//Memoria dinamica: permite craer nuevas variables o arrays de memoria de 
//cualquier tipo en tiempo de ejecucion 
void dinamica(){
	float *p; 
	int numelem = 0, i; 
	do{
		printf("\tDime el numero de elementos de array a crear: ");
		scanf("%d",&numelem);
	} while (numelem<1);

	//reservamos memoria el numero de elementos 
	p = (float *) malloc(numelem*4);	

	//comprobamos que hay memoria para reservar 
	if(p == NULL){
		printf("\tError: No hay suficiente memoria.");
		exit(0);
	}

	printf("\tIntroduzca los datos del array: \n");
	for (i = 0; i < numelem; i++){
		//almacenamos los valores en esa porcion de memoria 
		scanf("\t%f",&p[i]);
	}

	for (i = 0; i < numelem; i++){
		printf("\t%g",p[i]);
	}
	printf("\n");
	
	free(p);
}



//*******************************SOKETS*********************************************
//**********************************************************************************
//Para hacer un chat con sockets
//https://procomsys.wordpress.com/2018/06/18/programacion-en-red-desarrollando-chat-de-consola-en-c-mediante-sockets-tcp/
//https://www.youtube.com/watch?v=1D60ta0Og9M


void conexionSocket(){
	int packet_socket;
	packet_socket = socket(AF_INET, SOCK_STREAM, 0);

	if (packet_socket == -1){
		perror("\tError al abrir el socket");
		exit(1);
	}else{
		perror("\tExito al abrir el socket");
	}

	//cerramos el socket en el caso de que lo abras 
	close(packet_socket);
}


//*******************************FICHEROS*********************************************
//************************************************************************************

void UsoFicheros(){
	FILE *fich_lect;
	FILE *fich_escr;
	char nombre[10]="Alfonso", apellido1[10]="Casado", apellido2[10]="Sanz";
	float nota1=5.6,nota2=8.8, nota_media;

	/* Abrimos el fichero */
	fich_lect = fopen( "notas.txt", "r" );
	fich_escr = fopen( "notas_finales.txt", "w");

	//Cbecera bonita 
	fputs("Notas finales\n----------\n",fich_escr);

	/* Leemos mientras halla datos */
	do {
		fscanf( fich_lect, "%s %s %s %f",nombre,apellido1,apellido2,&nota1,&nota2);
		//Escribimos las notas del alumno 
		fprintf(fich_escr,"Alumno: %s %s %s\n",apellido1,apellido2,nombre);
		fprintf(fich_escr,"Nota primer parcial: %f\n",nota1);
		fprintf(fich_escr,"Nota segundo parcial: %f\n",nota2);
		nota_media = (nota1/nota2)/2;
		fprintf(fich_escr,"Nota media: %f\n",nota_media);
		fprintf(fich_escr,"Aprueba?: ");
		if (nota_media >= 5.0){
			fprintf(fich_escr,"Si");
		}else{
			fprintf(fich_escr,"NO");
		}
		fprintf( fich_escr, "\n\n" );

	} while (!feof( fich_lect ) );

	fclose( fich_lect );
	fclose( fich_escr );
}








