/*
 * funcionesTP1.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Administrador
 */

#ifndef MENUS_H_
#define MENUS_H_

/// @brief
/// 	Imprime el menu principal y pide al usuario ingresar una opcion
/// @return

/// @brief
/// 	Imprime el menu principal y pide al usuario ingresar la opcion
/// @param km
/// @param aerolineas
/// @param latam
/// 	Paso como argumento las variables base para mostrar su valor
/// 	actual en el menu
/// @param entradaForzada
/// 	Para ingresar forzosamente a una opcion
/// @return
/// 	Devuelve la opcion ingresada, si no es valida devuelve 0
int menuPrincipal(int km, float aerolineas,float latam, int entradaForzada);


/// @brief
/// 	Imprime el submenu de carga de precio y pide al usuario una opcion
/// @param precioAerolineas
/// @param precioLatam
/// 	Pido las variables de precio base para mostrar su valor actual
/// @return
/// 	Retorno la opcion ingresada
int subMenuIngresarPrecios(float precioAerolineas,float precioLatam);

#endif /* FUNCIONESTP1_H_ */
