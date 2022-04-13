/*
 * validaciones.h
 *
 *  Created on: 12 abr. 2022
 *      Author: Administrador
 */

#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_


/// @brief
///		 Pide una variable al usuario y valida que sea del tipo
///		 correcto (float o int, segun la funcion)
/// 	 Caso contrario le pide al usuario que de una entrada
/// 	 valida
///
/// @param mensaje
/// 	Un mensaje que le voy a mostrar al usuario al momento de
/// 	pedir el dato
///
/// @param tomarNegativos
/// 	Si es distinto de 0, puedo tomar negativos
/// 	Si es 0, voy a rechazar las entradas negativas
///
/// @return
/// 	Retorno una entrada valida
///
float validarFloat(char *mensaje, int tomarNegativos);
int validarInt(char *mensaje, int tomarNegativos);

#endif /* VALIDACIONES_H_ */
