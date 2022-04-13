/*
 * main.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Campos Alejo
 */


#include <stdlib.h>
#include <stdio.h>
#include "funcionesTP1.h"
#include "validaciones.h"

int main(void){
	setbuf(stdout,NULL);

	int salida=0;

	int input;

	int km;
	float precioAerolineas;
	float precioLatam;


	do{
		input=menuPrincipal();
		switch(input){

			case 1:
				km=validarInt("Ingresar KMs: ",0);
				printf("Se ingreso %d\n",km);
			break;

			case 2:
				precioAerolineas=validarFloat("Ingresar precio del vuelo con Aerolineas",0);
				precioLatam=validarFloat("Ingresar precio del vuelo con Latam",0);
				printf("Precio Aerolineas: $%.2f\nPrecioLatam: $%.2f\n",precioAerolineas,precioLatam);
			break;

			case 3:
				/*Verificar que se haya ingresado los km y precios (!=0)
				 * Si falta algun dato preguntar si se desea ingresar en el momento
				 * Si el usuario NO quiere ingresar, volver al menu principal
				 *
				 * int flagDatosCalculados=funcion calcularCotizacion();
				 */
				printf("Calcular costos\n");
			break;

			case 4:
				/*	Verificar que los primeros 3 pasos hayan sido realizados previamente
				 *  km y precio !=0 y flagDatosCalculados=1
				 *
				 *  Caso contrario, precio si se desea mostrar los datos parciales
				 *
				 */
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

