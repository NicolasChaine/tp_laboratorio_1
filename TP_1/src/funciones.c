/*
 * funciones.c
 *
 *  Created on: 11 abr. 2022
 *      Author: nicol
 */
#include "funciones.h"


int fn_sumar(int num1, int num2){
		int rtn;

		rtn = num1 + num2;

		return rtn;
	}

int fn_restar(int num1, int num2){
		int rtn;

		rtn = num1 - num2;

		return rtn;
	}

float fn_multiplicar(float num1, float num2){
		float rtn;

		rtn = num1 * num2;

		return rtn;
	}

float fn_dividir(float numA, float numB){
		float rtn;

		if(numB != 0){
			rtn = numA / numB;
		}else{
			printf("\nERROR. NO SE PUEDE DIVIDIR POR 0");
			rtn = 0;
		}

		return rtn;
	}


int fn_getInt(int *pNumeroIngresado, char mensaje[], char mensajeError[], int minimo, int maximo){
	int retorno = -1;
	int auxiliarInt;
	int retornoScanf;
	if(pNumeroIngresado != NULL && mensaje != NULL && mensajeError != NULL && minimo < maximo){
		do{
			printf("%s",mensaje);
			retornoScanf = scanf("%d",&auxiliarInt);

			if(retornoScanf != 1 || auxiliarInt > maximo || auxiliarInt < minimo)
			{
				printf("%s",mensajeError);
			}
			else{
				*pNumeroIngresado = auxiliarInt;
				retorno = 0;
			}
		}while (retorno != 0);
	}
	return retorno;
}


int fn_getFloat(float *pNumeroIngresado, char mensaje[], char mensajeError[], float minimo, float maximo){
	int retorno = -1;
	float auxiliarFloat;
	float retornoScanf;
	if(pNumeroIngresado != NULL && mensaje != NULL && mensajeError != NULL && minimo < maximo){
		do{
			printf("%s",mensaje);
			retornoScanf = scanf("%f",&auxiliarFloat);

			if(retornoScanf != 1 || auxiliarFloat > maximo || auxiliarFloat < minimo)
			{
				printf("%s",mensajeError);
			}
			else{
				*pNumeroIngresado = auxiliarFloat;
				retorno = 0;
			}
		}while (retorno != 0);
	}
	return retorno;
}


int fn_getChar(char* pResultado, char mensaje[], char mensajeError[], char minimo, char maximo){
	int retorno = -1;
	char buffer;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo){
		do{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%c",&buffer);
			if(buffer >= minimo && buffer <= maximo){
				*pResultado = buffer;
				retorno = 0;
			}
			else{
				printf("%s",mensajeError);
			}
		}while(retorno != 0);
	}
	return retorno;
}


void fn_mostrarMensaje(char mensaje[], int resultado){
	printf("%s %d",mensaje,resultado);
}

void fn_mostrarResultados(char mensaje1[], int resultado1,char mensaje2[], int resultado2,char mensaje3[], float resultado3,char mensaje4[], float resultado4,char mensaje5[], float resultado5,char mensaje6[], float resultado6,char mensaje7[], int resultado7, char mensaje8[], float resultado8, char mensaje9[], float resultado9,char mensaje10[], float resultado10, char mensaje11[], float resultado11, char mensaje12[], float resultado12){
	printf("%s%.2d %s%.2d %s%.2f %s%.2f %s%.2f %s%.2f %s%.2d %s%.2f %s%.2f %s%.2f %s%.2f %s%.2f",mensaje1,resultado1,mensaje2,resultado2,mensaje3,resultado3,mensaje4,resultado4,mensaje5,resultado5,mensaje6,resultado6,mensaje7,resultado7,mensaje8,resultado8,mensaje9,resultado9,mensaje10,resultado10,mensaje11,resultado11,mensaje12,resultado12);
}

void fn_mostrarMensajeSolo(char mensaje[]){
	printf("%s",mensaje);
}

int fn_mostrarCalculos(float *costoDebitoAer,float *costoDebitoLat,float *costoCreditoAer,float *costoCreditoLat,float *costoBtcAer,float *costoBtcLat,float *costoxKmAer,float *costoxKmLat,float *diferenciaPrecio,int precioAerolineas, int precioLatam, int kmIngresados){
	int retorno = 1;
	*costoDebitoAer = fn_multiplicar(precioAerolineas,0.90);
	*costoDebitoLat = fn_multiplicar(precioLatam,0.90);
	*costoCreditoAer = fn_multiplicar(precioAerolineas,1.25);
	*costoCreditoLat = fn_multiplicar(precioLatam,1.25);
	*costoBtcAer = fn_dividir(precioAerolineas,4606954.55);
	*costoBtcLat = fn_dividir(precioLatam,4606954.55);
	*costoxKmAer = fn_dividir(precioAerolineas,kmIngresados);
	*costoxKmLat = fn_dividir(precioLatam,kmIngresados);
	*diferenciaPrecio = fn_restar(precioLatam,precioAerolineas);
	return retorno;
}
