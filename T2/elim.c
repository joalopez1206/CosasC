#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "elim.h"
/*
Como quitamos un espacio ????
por ejemplo si tengo el str "hola que tal" deberia de dejarlo igual
y si tengo el string "hola   que      tal" ->(f) "hola que tal"
entonces como quito espacios, via aritmetica de punteros ???

entonces tengo 
"hola   que   tal" 
 ||	
 rq
"hola   que   tal" 
  ||	
  rq	
"hola   que   tal" 
   ||	
   rq	
"hola  que tal " 
    |  |	
    r  q	 


deberia de tener un puntero
si me topo con un espacio entonces si el siguiente lo es, lo sacamos! o mejor dicho desplazamos todo a la izquierda?????
*/
//este se hace modificando el mismo argumento
void eliminar_espacios(char *s) {
	char *r;
	r = s; // apuntamos al primer caracter
	char *q = s+1; // apuntamos al segundo caracter
	int cant_esp=0;
	while(r!=0){// mientras no llegemos al final del str
		while(*q == ' '){// ojo, el codigo para ascii de char ' ' es 32 !
			cant_esp ++;
			q++;
		}
		if (cant_esp==1){
			r++; 
		}
		else{
			
		}
	}
}


//este en cambio es via cosas funcionales ! o sea usando malloc
char *eliminacion_espacios(const char *s) {
  
}
