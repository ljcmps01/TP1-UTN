/*
 ============================================================================
 Name        : TP2.c
 Author      : Campos Alejo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_PASAJEROS 2000

typedef struct{
	int id;
	char name[51];
	char lastname[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
}pasajero;

int menuPrincipal();


int main(void) {
	casa miCasa;
	miCasa.ambientes=5;
	miCasa.precio=10000000.12;
	miCasa.calle="ministro french";
	miCasa.numeroDeCasa=3376;

	printf("---------------\n");
	printf("Mi casa:\n");
	printf("Queda en %s %d\n",miCasa.calle, miCasa.numeroDeCasa);
	printf("tiene %d ambientes\n",miCasa.ambientes);
	printf("vale: $%f \n",miCasa.precio);

	return EXIT_SUCCESS;
}

int menuPrincipal(){
	printf("1. ALTAS\n");
	// CALCULAR ID Y PEDIR AL USUARIO EL RESTO DE DATOS

	printf("2. MODIFICAR\n");
	//INGRESAR ID -> MODIFICAR DATOS (SI SE INGRESA NULL NO MODIFICAR)
	printf("3. BAJA\n");
	//INGRESAR ID -> BORRAR DEL SISTEMA
	printf("4. INFORMAR \n");
		// LISTAR ALFABETICAMENTE POR APELLIDO
		// TOTAL Y PROMEDIO DE COSTO DE PASAJES
			//# DE PASAJEROS >PRECIO PROMEDIO
		// LISTADO POR CODIGO CON ESTADO "ACTIVO"
	printf("\n");
	printf("\n");
	printf("\n");
}
