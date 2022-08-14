/*
Turro

	Escribir una función que reciba como parámetro una cadena de caracteres y
	devuelva la cantidad de caracteres no alfabéticos que hay en la cadena.
	No tener en cuenta la ñ, ni las vocales acentuadas. 
*/

#include<stdio.h>

int main(void){

}
int cant_caracter_alfa(const char *str){

    char *p = str;
    int cant_caracter = 0;

    while(*p != '\0'){
        if((*p >= 'a' && *p <= 'z')|| (*p >= 'A' && *p <= 'Z'))
            cant_caracter++;
        p++;
    }

    return cant_caracter;
}

int cant_caracter_no_alfa(const char *str){

    char *p = str;
    int cant_caracter = 0;

    while(*p != '\0'){
        if((*p < 'a' || *p > 'z') && (*p < 'A' || *p > 'Z'))
            cant_caracter++;
        p++;
    }

    return cant_caracter;

}

/* 
09.c
contador de palabras
*/
#include <stdio.h>
#include <string.h>
int contador_palabras(const char *cadena, const char *buscar){
    char *aux = cadena;

    int contador = 0;
    int len_buscar = strlen(buscar);

    while(*aux){
        if(!memcmp(buscar, aux, len_buscar)){
            aux += len_buscar - 1;
            contador++;
        }
        aux++;
    }

    return contador;
}
int main () {
 	char str[35] = "sa54cagr casa54 %fg sa54 45fd ";

	printf("%d", contador_palabras(str,"sa54"));

   
   return(0);
}