/* Girón Knepp Hanna Sofía
laboratorio 11 ejercicio 11*/

#include <stdio.h> 
#include <string.h> 

// Prototipo o firma de las funciones del programa 
void imprimir(char[]); 
// Definición o implementación de la función main 

int main()
{ 
  char nombre[] = "Facultad de Ingeniería"; 
  imprimir(nombre);
  return 0;
} 

// Implementación de las funciones del programa 
void imprimir(char s[]){ 
  int tam; 
  for ( tam=strlen(s)-1 ; tam>=0 ; tam--) 
    printf("%c", s[tam]); 
  printf("\n"); 
} 
// Implementación de las funciones del programa 
void imprimir2(char s[]){ 
  int tam, i;
  tam = strlen(s);
  for (i = 0; i < tam; i++) 
    printf("%c", s[i]); 
  printf("\n"); 
} 
