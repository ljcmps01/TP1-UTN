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
	system("cls");

	if(!tomarNegativos){
		if(input<=0){
			printf("entrada invalida, por favor ingresar un numero mayor que 0");
			system("pause");
			return validarFloat(mensaje, tomarNegativos);
		}
	}
	system("pause");
	return input;

}

int validarInt(char *mensaje, int tomarNegativos){
	int entradaValida=1;
	int input=0;

	do{
		printf("%s", mensaje);
		fflush(stdin);
		entradaValida=scanf("%d",&input);
	}while(!entradaValida);
	system("cls");

	if(!tomarNegativos){
		if(input<=0){
			printf("entrada invalida, por favor ingresar un numero mayor que 0");
			system("pause");
			return validarInt(mensaje, tomarNegativos);
		}
	}
	system("pause");
	return input;
}
