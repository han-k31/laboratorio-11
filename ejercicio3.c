/* Girón Knepp Hanna Sofía
laboratorio 11 ejercicio 3*/

#include <stdio.h> 

int resultado; //variable global 

void multiplicar(); // prototipo de la función  
void sumar();
void restar();
void dividir();

int main() 
{ 
    multiplicar(); //llamado de la función multiplicar 
    printf("Resultado multiplicacion: %i\n",resultado); 
    sumar();
    printf("Resultado suma: %d\n",resultado); 
    restar();
    printf("Resultado resta: %d\n",resultado); 
    dividir();
    printf("Resultado dividir: %d\n",resultado); 
    return 0; 
} 
void multiplicar() //función multiplicar 
{ 
  resultado = 5 * 4; 
} 
void sumar() //función sumar 
{ 
  resultado = 5 + 4; 
}
void restar() //función restar 
{ 
  resultado = 5 - 4; 
}
void dividir() //función dividir 
{ 
  resultado = 5 / 4; 
}
