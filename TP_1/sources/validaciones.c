/*
 * validaciones.c
 *
 *  Created on: 12 abr. 2022
 *      Author: Administrador
 */


#include <stdlib.h>
#include <stdio.h>

float validarFloat(char *mensaje, int tomarNegativos){
	int entradaValida=1;
	float input=0;

	do{
		printf("%s", mensaje);
		fflush(stdin);
		entradaValida=scanf("%f",&input);
	}while(!entradaValida);

	if(!tomarNegativos){
		if(input<=0){
			printf("entrada invalida, por favor ingresar un numero mayor que 0...\n");
			system("pause");
			return validarFloat(mensaje, tomarNegativos);
		}
	}
	return input;

}

int validarInt(char *mensaje, int tomarNegativos){
	system("cls");
	int entradaValida=1;
	int input=0;

	do{
		printf("%s", mensaje);
		fflush(stdin);
		entradaValida=scanf("%d",&input);
	}while(!entradaValida);

	if(!tomarNegativos){
		if(input<=0){
			printf("entrada invalida, por favor ingresar un numero mayor que 0...\n");
			system("pause");
			return validarInt(mensaje, tomarNegativos);
		}
	}
	return input;
}
