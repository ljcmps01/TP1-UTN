/*
 * calculos.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Administrador
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

/// @brief
/// 	Calculo un porcentaje del dato ingresado
///
/// @param valor
/// 	Es la variable base que sobra la que se calculara el porcentaje
/// @param porcentaje
/// 	Es el porcentaje extra que se calculara
/// @return
/// 	Devuelve el valor base +- el porcentaje
float porcentual(float valor,float porcentaje);

/// @brief
/// 	Calculo la relacion entre dos variables
/// @param numerador
/// 	Es la variable base
/// @param denominador
/// 	Es la variable sobre la que se calcula la relacion
/// 	NO PUEDE SER 0
/// @return
/// 	Devuelve el valor de la relacion en float
float relacion(float numerador, float denominador);

#endif /* CALCULOS_H_ */
