/*
 * funcionesTP1.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Administrador
 */

#ifndef MENUS_H_
#define MENUS_H_

/// @brief
/// Imprime el menu principal y pide al usuario ingresar la opcion
/// @return Devuelve el valor ingresado, si no es valido devuelve 0
int menuPrincipal(int km, float aerolineas,float latam, int entradaForzada);

int subMenuIngresarPrecios(float precioAerolineas,float precioLatam);

#endif /* FUNCIONESTP1_H_ */
