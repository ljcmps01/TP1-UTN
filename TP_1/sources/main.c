/*
 * main.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Campos Alejo
 *      Github Repo: github.com/ljcmps01/tp_laboratorio_1/tree/master/TP_1
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include "menus.h"
#include "validaciones.h"
#include "calculos.h"


#define BTC 4582550
#define INTERESCREDITO 25
#define DESCUENTODEBITO -10


int main(void){
	setbuf(stdout,NULL);


//Flag de salidas de menu
	int salida=0;
	int salidaSubMenuPrecios=0;

//Entrada forzada
	int entrada=0;

//Variables de bandera
	int flagKM=0;
	int flagPrecioAerolineas=0;
	int flagPrecioLatam=0;
	int flagCotizacion=0;

//Variables base
	int km=0;
	float precioAerolineas=0,
		  precioLatam=0;

//Variables de calculo
	float precioDebitoAerolineas=0,
		  precioCreditoAerolineas=0,
		  precioBTCAerolineas=0,
		  precioUnitarioAerolineas=0;

	float precioDebitoLatam=0,
		  precioCreditoLatam=0,
		  precioBTCLatam=0,
		  precioUnitarioLatam=0,
		  difDePrecio=0;


	do{
		switch(menuPrincipal(km,precioAerolineas,precioLatam,entrada)){

		   /*Opcion 1 (INGRESAR KM)
		   * En esta opcion simplemente se ingresa el valor en km
		   * Solo se debe cumplir que sea un numero entero mayor que 0
		   * Una vez ingresado se levanta la bandera de km ingresado y
		   * se limpia la pantalla antes de retornar al menu principal
		   */
			case 1:
				entrada=0;
				km=validarInt("Ingresar KMs: ",0);
				printf("Se ingreso %d\n",km);
				flagKM=1;
				system("pause");
				system("cls");
			break;

			/*OPCION 2 (Ingresar precios de vuelos)
			 * Se hace un submenu en el cual el usuario puede decidir que
			 * precio ingresar/modificar
			 * Debe ser un numero real mayor que 0
			 * Una vez ingresado los valores deseados, se debe volver al
			 * menu principal utilizando la opcion 4
			 * Donde se corrobora si se ingresaron los precios de ambas
			 * empresas y levantamos la bandera correspondiente
			 *
			 */
			case 2:
				entrada=0;
				do{
					switch(subMenuIngresarPrecios(precioAerolineas,precioLatam)){
						case 1:
							precioAerolineas=validarFloat("Ingresar precio del vuelo con Aerolineas: ",0);
							precioLatam=validarFloat("Ingresar precio del vuelo con Latam: ",0);
						break;

						case 2:
							precioAerolineas=validarFloat("Ingresar precio del vuelo con Aerolineas: ",0);
						break;

						case 3:
							precioLatam=validarFloat("Ingresar precio del vuelo con Latam: ",0);
						break;

						case 4:
							salidaSubMenuPrecios=1;
						break;

						default:
							printf("Ingrese una opcion valida (entre 1 y 3)\n");
							system("pause");
							break;
					}
				}while(!salidaSubMenuPrecios);
				if(precioAerolineas){
					flagPrecioAerolineas=1;
				}
				if(precioLatam){
					flagPrecioLatam=1;
				}

				system("pause");
				system("cls");
			break;


			/*OPCION 3 (Calcular costos):
			 * Primero se verifica que los pasos previos se hayan
			 * realizado correctamente, caso contrario se notifica
			 * al usuario y se vuelve al menu principal para que pueda
			 * cargar los datos necesarios
			 *
			 * Una vez ingresados se calculan los costos y se levanta
			 * la bandera de cotizacion
			 *
			 */
			case 3:
				entrada=0;
				if(!flagKM){
					printf("Ingrese los kilometros antes de calcular la cotizacion por favor\n");
					system("pause");
					system("cls");
					break;
				}

				if(!flagPrecioAerolineas){
					printf("Falta ingresar el precio de Aerolineas\n");
					system("pause");
					system("cls");
					break;
				}
				if(!flagPrecioLatam){
					printf("Falta ingresar el precio de Latam\n");
					system("pause");
					system("cls");
					break;
				}

				precioDebitoAerolineas=porcentual(precioAerolineas,DESCUENTODEBITO);
				precioCreditoAerolineas=porcentual(precioAerolineas, INTERESCREDITO);
				precioBTCAerolineas=relacion(precioAerolineas, BTC);
				precioUnitarioAerolineas=relacion(precioAerolineas, km);

				precioDebitoLatam=porcentual(precioLatam,DESCUENTODEBITO);
				precioCreditoLatam=porcentual(precioLatam, INTERESCREDITO);
				precioBTCLatam=relacion(precioLatam, BTC);
				precioUnitarioLatam=relacion(precioLatam, km);

				difDePrecio=diferencia(precioAerolineas, precioLatam);
				flagCotizacion=1;
				printf("\nCostos calculados exitosamente\n");
				system("pause");
				system("cls");
			break;

			/*OPCION 4 (Informar resultados):
			 * Verifico que se haya realizado la cotizacion
			 * si se realizo se calculan las cotizaciones normalmente
			 * caso contrario se le notifica al usuario que debe realizar
			 * ese paso previamente
			 *
			 */
			case 4:

				system("cls");
				entrada=0;
				if(flagCotizacion){
					printf("KMs Ingresados: %d km \n\n",km);

					printf("Precio Latam: $%.2f\n",precioLatam);
					printf("Precio con tarjeta de debito: $%.2f\n", precioDebitoLatam);
					printf("Precio con tarjeta de credito: $%.2f\n",precioCreditoLatam);
					printf("Precio pagando con bitcoin: %f BTC\n",precioBTCLatam);
					printf("Mostrar precio unitario: $%.2f\n\n",precioUnitarioLatam);

					printf("Precio Aerolineas: $%.2f\n",precioAerolineas);
					printf("Precio con tarjeta de debito: $%.2f\n", precioDebitoAerolineas);
					printf("Precio con tarjeta de credito: $%.2f\n",precioCreditoAerolineas);
					printf("Precio pagando con bitcoin: %f BTC\n",precioBTCAerolineas);
					printf("Mostrar precio unitario: $%.2f\n\n",precioUnitarioAerolineas);

					printf("La diferencia de precio es: $%.2f\n",difDePrecio);

				}
				else{
					printf("Falta calcular las cotizaciones (opcion 4)\n");
				}

				system("pause");
				system("cls");
			break;

			/*OPCION 5 (CARGA FORZADA):
			 * Simplemente se cargan los valores, se levantan las banderas
			 * Se calculan las diferentes cotizaciones y finalmente se
			 * llama a la opcion 4 para mostrar los resultados
			 *
			 */
			case 5:

				km=7090;
				precioAerolineas=162965;
				precioLatam=159339;

				precioDebitoAerolineas=porcentual(precioAerolineas,DESCUENTODEBITO);
				precioCreditoAerolineas=porcentual(precioAerolineas, INTERESCREDITO);
				precioBTCAerolineas=relacion(precioAerolineas, BTC);
				precioUnitarioAerolineas=relacion(precioAerolineas, km);

				precioDebitoLatam=porcentual(precioLatam,DESCUENTODEBITO);
				precioCreditoLatam=porcentual(precioLatam, INTERESCREDITO);
				precioBTCLatam=relacion(precioLatam, BTC);
				precioUnitarioLatam=relacion(precioLatam, km);


				difDePrecio=diferencia(precioAerolineas, precioLatam);
				flagCotizacion=1;

				entrada=4;
			break;

			/*OPCION 6:
			 * Se levanta la bandera de salida del do while loop
			 *
			 */
			case 6:
				entrada=0;
				printf("FIN DEL PROGRAMA\n");
				salida=1;
				system("pause");
			break;

			//Si se llegara a ingresar una opcion fuera del rango [1:6]
			//Se define que es una entrada no valida
			default:
				entrada=0;
				printf("Entrada no valida, ingrese un numero entre 1 y 6\n");
				system("pause");
				system("cls");
			break;
		}
	}while(!salida);
	return EXIT_SUCCESS;

}

