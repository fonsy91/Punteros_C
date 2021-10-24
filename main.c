
//TEORIA DE PUNTEROS EN C 
//Librerias 

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


int main(int argc, char const *argv[]){

	//REPASO DE PUNTEROS 
	/*
	printf("\n");
	printf("\t*************************************************\n");
	printf("\t******************PUNTEROS***********************\n");
	printf("\t*************************************************\n");
	printf("\n");
	printf("\t1.Repaso de punteros.\n");
	printf("\n");
	*/
	//primer metodo donde hacemos algnuas operaciones con punteros
	/*
	operaciones();
	printf("\t2.Punteros y arrays de datos.\n");
	printf("\n");
	arrays();
	printf("\n");
	printf("\t3.Punteros a cadenas de caracteres.\n");
	printf("\n");
	cadenas();
	printf("\n");
	printf("\t4.Arrays de punteros.\n");
	arraysPunteros();
	printf("\n");
	arrayOrdenado();
	printf("\n");
	printf("\n");
	printf("\t5.Asignacion de memoria dinámica.\n");
	dinamica();
	*/

	
	printf("\n");
	printf("\t*************************************************\n");
	printf("\t******************SOCKETS***********************\n");
	printf("\t*************************************************\n");
	printf("\n");
	printf("\t1.Sockets.\n");
	printf("\n");
	conexionSocket();
	printf("\n");
	


	/*
	printf("\n");
	printf("\t*************************************************\n");
	printf("\t******************Ficheros***********************\n");
	printf("\t*************************************************\n");
	printf("\n");
	printf("\t1.Ficheros.\n");
	printf("\n");
	UsoFicheros();
	printf("\n");
	*/



	return 0; 
}

