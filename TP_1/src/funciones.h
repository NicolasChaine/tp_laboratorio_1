/*
 * funciones.h
 *
 *  Created on: 11 abr. 2022
 *      Author: nicol
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>

/// @brief SE ENCARGA DE SUMAR 2 OPERANDOS
///
/// @param num1
/// @param num2
/// @return LA SUMA DE AMBOS NUMEROS
int fn_sumar(int num1, int num2);

/// @brief SE ENCARGA DE RESTAR 2 OPERANDOS
///
/// @param num1
/// @param num2
/// @return DEVUELVE LA RESTA DEL PRIMER NUMERO MENOS EL SEGUNDO
int fn_restar(int num1, int num2);

/// @brief ES LA MULTIPLICACION DE 2 OPERANDOS
///
/// @param num1
/// @param num2
/// @return DEVUELVE LA MULTIPLICACION DE AMBOS NUMEROS
float fn_multiplicar(float num1, float num2);

/// @brief CONSISTE EN LA DIVISION DE 2 NUMEROS. ESTA VALIDADO PARA QUE EL DENOMINADOR SEA DISTINTO DE CERO
///
/// @param numA
/// @param numB
/// @return DEVUELVE LA DIVISION DEL PRIMER NUMERO SOBRE EL SEGUNDO
float fn_dividir(float numA, float numB);

/// @brief CONSISTE EN LA INCORPORACION DE UN NUMERO DE TIPO ENTERO
///
/// @param pNumeroIngresado --> TOMAMOS ESTE NUMERO CON UN SCANF Y LO USAMOS CON UN PUNTERO
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @return ME RETORNA CERO SI VALIDA BIEN EL PROCESO, Y PUEDO USAR EL PUNTERO CON EL NUMERO ENTERO QUE OBTUVE
int fn_getInt(int *pNumeroIngresado, char mensaje[], char mensajeError[], int minimo, int maximo);

/// @brief CONSISTE EN LA INCORPORACION DE UN NUMERO DECIMAL
///
/// @param pNumeroIngresado --> TOMAMOS ESTE NUMERO CON UN SCANF Y LO USAMOS CON UN PUNTERO
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @return ME RETORNA CERO SI VALIDA BIEN EL PROCESO Y OBTENGO MI NUMERO DECIMAL A TRAVES DE UN PUNTERO
int fn_getFloat(float *pNumeroIngresado, char mensaje[], char mensajeError[], float minimo, float maximo);

/// @brief CONSISTE EN LA INCORPORACION DE UN CARACTER PARA MI MENU
///
/// @param pNumeroIngresado OBTENGO MI CARACTER CON UN SCANF Y LO GUARDO CON UN PUNTERO
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @return RETORNA CERO LA FUNCION SI ESTA TODO OK GUARDA MI CARACTER EN UN PUNTERO
int fn_getChar(char* pResultado, char mensaje[], char mensajeError[], char minimo, char maximo);

/// @brief CONSISTE EN MOSTRAR UN MENSAJE Y UN VALOR ENTERO EN CONJUNTO CON UN SCANF
///
/// @param mensaje MI MENSAJE
/// @param resultado MI VALOR
/// @return RETORNA AMBOS VALORES EN CONSOLA
void fn_mostrarMensaje(char mensaje[], int resultado);


/// @brief CONSISTE EN MOSTRAR UNA CADENA DE CARACTERES CON UN SCANF
///
/// @param mensaje
/// @return DEVUELVE MI MENSAJE EN CONSOLA
void fn_mostrarMensajeSolo(char mensaje[]);

/// @brief CONSISTE EN REALIZAR TODOS LOS CALCULOS CORRESPONDIENTES A LA OPCION 3 DEL MENU DEL TP_1. PARA ESO, EN LA MISMA FUNCION INGRESO MIS FUNCIONES DE OPERACIONES (RESTA, MULTIPLICACION, DIVISION)
///
/// @param costoDebitoAer
/// @param costoDebitoLat
/// @param costoCreditoAer
/// @param costoCreditoLat
/// @param costoBtcAer
/// @param costoBtcLat
/// @param costoxKmAer
/// @param costoxKmLat
/// @param diferenciaPrecio
/// @param precioAerolineas
/// @param precioLatam
/// @param kmIngresados
/// @return ME DEVUELVE EL RESULTADOS DE MIS OPERACIONES A TRAVES DE PUNTEROS
int fn_mostrarCalculos(float *costoDebitoAer,float *costoDebitoLat,float *costoCreditoAer,float *costoCreditoLat,float *costoBtcAer,float *costoBtcLat,float *costoxKmAer,float *costoxKmLat,float *diferenciaPrecio,int precioAerolineas, int precioLatam, int kmIngresados);

/// @brief DISCULPEN ESTA DESPROLIJIDAD PERO ES UNA FUNCION CON EL OBJETIVO DE MOSTRAR LOS RESULTADOS DEL PUNTO 4 DEL TP_1 Y AGRUPARLOS A TODOS EN UNA SOLA FUNCION. CADA MENSAJE ES UNA LINEA DE LA CONSIGNA DEL PUNTO 4 Y CADA PARAMETRO DE RESULTADO ES UN VALOR CON LA RESPUESTA
///
/// @param mensaje1
/// @param resultado1
/// @param mensaje2
/// @param resultado2
/// @param mensaje3
/// @param resultado3
/// @param mensaje4
/// @param resultado4
/// @param mensaje5
/// @param resultado5
/// @param mensaje6
/// @param resultado6
/// @param mensaje7
/// @param resultado7
/// @param mensaje8
/// @param resultado8
/// @param mensaje9
/// @param resultado9
/// @param mensaje10
/// @param resultado10
/// @param mensaje11
/// @param resultado11
/// @param mensaje12
/// @param resultado12
/// @return ESTO ME DEVUELVE TODOS LOS MENSAJES INGRESADOS QUE LE DAN FORMA AL MENU Y TODAS LOS VALORES DE RESULTADOS QUE OBTUVE EN EL PUNTO 3 DEL TP_1
void fn_mostrarResultados(char mensaje1[], int resultado1,char mensaje2[], int resultado2,char mensaje3[], float resultado3,char mensaje4[], float resultado4,char mensaje5[], float resultado5,char mensaje6[], float resultado6,char mensaje7[], int resultado7, char mensaje8[], float resultado8, char mensaje9[], float resultado9,char mensaje10[], float resultado10, char mensaje11[], float resultado11, char mensaje12[], float resultado12);

#endif /* FUNCIONES_H_ */
