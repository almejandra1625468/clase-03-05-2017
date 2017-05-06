#include <stdio.h>
#include <pthread.h>
#include <math.h>

#define MAXRECT 1000000
#define MAXTHREAD 10
#define BASE 0.0
#define LIMIT 1.0

double length = LIMIT - BASE; // La longitud en el eje 'x'
double numRectxThread = (double)(MAXRECT/MAXTHREAD); // Cuantos hilos/rectangulo
double base_length = 0; // Variable que tiene el ancho de cada rectangulo
double sumTotal = 0; // Variable que tendra la suma total
double partialSums[MAXTHREAD]; // Variable que tien la suma parcial de c/hilo

// Funcion a la que se le calculara la integral, x^2
double function(double x) {
	return x * x; 
}
void* calcular(void *arg) {
	int id = (int) arg;
	int i; 
	loslimit [BASE] = 0;
	partialSums [id]=0
	tope= (int)(length) 
	for (i =2; i<=tope; i++)
	     area=(int) (function(val) * base_length);

	printf("sum: %lf\n", partialSums[id]);
	pthread_exit(NULL);
}

int main(int argc, char** argv) {
	pthread_t ptarray [MAXTHREAD]/

	base_length = length/MAXRECT; // esta variable contiene el ancho de
				      // cada base de cada rectangulo
	printf("base length: %lf numRectxThread: %lf\n",base_length, numRectxThread);
	// Creacion de los hilos que calcularan el area bajo la curva
	for (int i = 0; i < MAXTHREAD; i++) {
		taskids[i] = i;
		pthread_create(&ptarray[i],NULL,&calcular,(void*)countarray[MAXTHREAD])// Inserte 
	}
	// Ciclo donde se espera el resultado de cada hilo
	for (int i = 0; i < MAXTHREAD; i++) {
		pthread_join(&pthread,NULL)// Inserte la funcion que espera por la terminacion de un hilo.
		// Esta funcion recibe dos argumentos
		// - threads
		// - NULL
		sumTotal += partialSums[i];
	}
	printf("Suma total %lf\n",sumTotal);
	pthread_exit(NULL);
}
