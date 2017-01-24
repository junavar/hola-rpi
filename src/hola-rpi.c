/*
 ============================================================================
 Name        : hola-rpi.c
 Author      : juan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define NUM_OPERACIONES 1000000000
int main(void) {
	time_t tiempo_inicial, tiempo_final;
	long long i,j;
	double a,b,c;

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf("Ejecutando %lld millones de operaciones de multiplicacion en coma flotante ", (long long)NUM_OPERACIONES/1000000);
	fflush(stdout);
	a=1.0000000001;
    b=sqrt(a);
	c=a;
	tiempo_inicial=time(NULL);
	long long div=10;
	for(i=div ; i>0;i--){
		for (j=NUM_OPERACIONES/div ; j>0;j--){
			c=(a*c);
	    	//printf(".");
		}
		printf(".");
		fflush(stdout);
	}
	tiempo_final=time(NULL);
	long tiempo_total;
	tiempo_total=(long)(tiempo_final-tiempo_inicial);
	printf("\nResultado %f en %ld segundos",c, tiempo_total);
	return EXIT_SUCCESS;
}
