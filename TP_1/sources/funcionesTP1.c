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
