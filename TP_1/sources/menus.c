/*
 * funcionesTP1.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Administrador
 */

#include <stdlib.h>
#include <stdio.h>

int menuPrincipal(int km, float aerolineas,float latam, int entradaForzada){
	if(entradaForzada){
		return entradaForzada;
	}

	int entrada=0;
	int esEntero=0;
	printf("1. Ingresar Kilometros: (km=%d)\n",km);
	printf("2. Ingresar Precio de Vuelos (Aerolineas=$%.2f Latam=$%.2f)\n",aerolineas,latam);
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

int subMenuIngresarPrecios(float precioAerolineas,float precioLatam){
	system("cls");

	int entrada=0;
	int esEntero=0;

	if(precioAerolineas){
		printf("Precio vuelo de Aerolineas: $%.2f\n",precioAerolineas);
	}
	else{
		printf("No hay precio ingresado de Aerolineas\n");
	}

	if(precioLatam){
		printf("Precio vuelo de Latam: $%.2f\n\n",precioLatam);
	}
	else{
		printf("No hay precio ingresado de Latam\n\n");
	}

	printf("1. Modificar ambos precios\n");
	printf("2. Modificar precio de Aerolineas\n");
	printf("3. Modificar precio de Latam\n");
	printf("4. Volver al menu principal\n");
	printf("Ingrese una opcion: ");

	esEntero=scanf("%d",&entrada);
	if(!esEntero){
		fflush(stdin);
		printf("Ingrese una opcion valida (entre 1 y 3)\n");
		system("pause");
		entrada=subMenuIngresarPrecios(precioAerolineas,precioLatam);
	}

	return entrada;
}
