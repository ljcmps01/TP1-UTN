/*
 * main.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Campos Alejo
 */


#include <stdlib.h>
#include <stdio.h>
#include "funcionesTP1.h"

int main(void){
	setbuf(stdout,NULL);

	int salida=0;

	int input;

	do{
		input=menuPrincipal();
		switch(input){

			case 1:
				printf("Cargar km\n");
			break;

			case 2:
				printf("Ingresar precios\n");
			break;

			case 3:
				printf("Calcular costos\n");
			break;

			case 4:
				printf("Informar resultados\n");
			break;

			case 5:
				printf("Carga forzada\n");
			break;

			case 6:
				printf("FIN DEL PROGRAMA");
				salida=1;
			break;

			default:
				printf("Entrada no valida, ingrese un numero entre 1 y 6\n");
				system("pause");
				system("cls");
			break;
		}
	}while(!salida);
	return EXIT_SUCCESS;

}

