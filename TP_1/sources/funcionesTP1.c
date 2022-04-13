/*
 * funcionesTP1.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Administrador
 */

#include <stdlib.h>
#include <stdio.h>

int menuPrincipal(){
	int entrada=0;
	int esEntero=0;
	printf("1. Ingresar Kilometros\n");
	printf("2. Ingresar Precio de Vuelos\n");
	printf("3. Calcular todos los costos\n");
	printf("4. Informar resultados\n");
	printf("5. Carga forzada de datos\n");
	printf("6. Salir\n\n");
	printf("ingrese opcion: ");

	esEntero=scanf("%d",&entrada);
	if(!esEntero){
		fflush(stdin);
		return 0;
	}

	return entrada;
}

int pedirKM(){
	int km=0;
	int entradaValida=0;

	do{
		printf("Cargar km de vuelo: ");
		fflush(stdin);
		entradaValida=scanf("%d",&km);
	}while(!entradaValida);
	system("cls");
	if(km<=0){
		printf("entrada invalida, por favor ingresar un numero mayor que 0");
		system("pause");
		return pedirKM();
	}
	system("pause");
	return km;
}
