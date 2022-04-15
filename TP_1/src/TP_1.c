/*
 ============================================================================
 Name        : TP.c
 Author      : NicoCh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion,bandera = 1,banderaY = 1, banderaZ = 1;
	char opcionChar;
	float kmIngresados,precioAerolineas,precioLatam,costoDebitoAer, costoDebitoLat, costoCreditoAer, costoCreditoLat, costoBtcAer, costoBtcLat, costoxKmAer, costoxKmLat, diferenciaPrecio;

	do{
		if(fn_getInt(&opcion, "\n\nSeleccione una opcion\n1.  Ingresar Kilómetros\n2.  Ingresar precio de vuelos\n3.  Calcular todos los costos\n4.  Informar Resultados\n5.  Carga forzada de datos\n6. Salir\n","No es una opcion válida. Intente nuevamente",1,6) == 0){
			switch(opcion){
				case 1:
					fn_getFloat(&kmIngresados,"Por favor, escriba el total de KMs que desea ingresar:","Error, el valor es invalido. Intente nuevamente\n",1,999999);
					fn_mostrarMensaje("Los KMs ingresados fueron: ",kmIngresados);
					bandera = 2;
					break;
				case 2:
					if(fn_getChar(&opcionChar, "\n\nDe que vuelo desea ingresar los precios?\nAerolineas = 'y'\nLatam = 'z'\n","Error. Recuerde que debe apretar 'y' para seleccionar Aerolineas o 'z' para seleccionar Latam. Intente nuevamente",'y','z') == 0){
						switch(opcionChar){
							case 'y':
								fn_getFloat(&precioAerolineas,"Has seleccionado Aerolineas. Ingrese el precio que desee: ","Error. El precio ingresado de aerolineas es inválido. Intente nuevamente\n",1,999999);
								fn_mostrarMensaje("El precio ingresado para aerolineas da un total de",precioAerolineas);
								banderaY = 2;
								break;

							case 'z':
								fn_getFloat(&precioLatam,"Has seleccionado Latam. Ingrese el precio que desee: ","Error. El precio ingresado de Latam es inválido. Intente nuevamente\n",1,999999);
								fn_mostrarMensaje("El precio ingresado para Latam da un total de",precioLatam);
								banderaZ = 2;
								break;
						}
					}
					break;
				case 3:
					if(bandera == 2 && banderaY == 2 && banderaZ == 2){
						fn_mostrarCalculos(&costoDebitoAer, &costoDebitoLat, &costoCreditoAer, &costoCreditoLat, &costoBtcAer, &costoBtcLat, &costoxKmAer, &costoxKmLat, &diferenciaPrecio, precioAerolineas, precioLatam, kmIngresados);
						fn_mostrarMensajeSolo("\nYa se han realizado los calculos correctamente");
						bandera = 3;
						break;
					}
					else{
						fn_mostrarMensajeSolo("\nNo se pueden realizar calculos si no ingresaron Kms y precios de Aerolineas/Latam anteriormente. Seleccione la opcion correspondiente e intente nuevamente");
						break;
					}
				case 4:
					if(bandera != 3){
						fn_mostrarMensajeSolo("\nNo se pueden mostrar resultados si no hicieron los calculos anteriormente. Seleccione la opcion correspondiente e intente nuevamente");
						break;
					}
					else{
						fn_mostrarResultados("KMs Ingresados: ",kmIngresados,
								" km\n\nPrecio Aerolineas: $",precioAerolineas,
								"\na) Precio con tarjeta de debito: $ ",costoDebitoAer,
								"\nb) Precio con tarjeta de credito: $ ",costoCreditoAer,
								"\nc) Precio pagando con bitcoin: ",costoBtcAer,
								"BTC\nd) Mostrar precio unitario: $ ",costoxKmAer,
								"\n\nPrecio Latam: $", precioLatam,
								"\na) Precio con tarjeta de debito: $ ",costoDebitoLat,
								"\nb) Precio con tarjeta de credito: $ ",costoCreditoLat,
								"\nc) Precio pagando con bitcoin: ",costoBtcLat,
								"BTC\nd) Mostrar precio unitario: $ ", costoxKmLat,
								"\n\nLa diferencia de precio es: $ ",diferenciaPrecio);
						break;
					}
				case 5:
					kmIngresados = 7090;
					precioAerolineas = 162965;
					precioLatam = 159339;
					fn_mostrarCalculos(&costoDebitoAer, &costoDebitoLat, &costoCreditoAer, &costoCreditoLat, &costoBtcAer, &costoBtcLat, &costoxKmAer, &costoxKmLat, &diferenciaPrecio, precioAerolineas, precioLatam, kmIngresados);
					fn_mostrarResultados("KMs Ingresados: ",kmIngresados,
													" km\n\nPrecio Aerolineas: $",precioAerolineas,
													"\na) Precio con tarjeta de debito: $ ",costoDebitoAer,
													"\nb) Precio con tarjeta de credito: $ ",costoCreditoAer,
													"\nc) Precio pagando con bitcoin: ",costoBtcAer,
													"BTC\nd) Mostrar precio unitario: $ ",costoxKmAer,
													"\n\nPrecio Latam: $", precioLatam,
													"\na) Precio con tarjeta de debito: $ ",costoDebitoLat,
													"\nb) Precio con tarjeta de credito: $ ",costoCreditoLat,
													"\nc) Precio pagando con bitcoin: ",costoBtcLat,
													"BTC\nd) Mostrar precio unitario: $ ", costoxKmLat,
													"\n\nLa diferencia de precio es: $ ",diferenciaPrecio);
					break;
			}
		}
	}while(opcion != 6);
	fn_mostrarMensajeSolo("\nMuchas gracias por su colaboración!");


	return EXIT_SUCCESS;
}
