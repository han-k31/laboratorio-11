/* Girón Knepp Hanna Sofía
*/
#include <stdio.h> 
#include <string.h> 

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
int main()
{
  char nombre[] = "Facultad de Ingenieria";
  imprimir(nombre);
  imprimir2(nombre);
  return 0;
}
