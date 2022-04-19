#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "seleccion.h"

Nodo *createNodo(int val, Nodo *izq, Nodo *der){
	Nodo *retNodo = (Nodo*)malloc(sizeof(Nodo));
	retNodo->x = val;
	retNodo->izq = izq;
	retNodo->der = der;
	return retNodo;
}

int selprim(Nodo **pa, int k) {
  
}

Nodo *ultimos(Nodo *a, int *pk) {
  ...
}


int main(){
	
	
	return 0;
}
