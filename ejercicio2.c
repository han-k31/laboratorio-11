/* Girón Knepp Hanna Sofía
laboratorio 11 ejercicio 2*/

#include <stdio.h> 

void sumar(); // prototipo de la función  
int suma2(int a, int b); //prototipado de funcion con parametros y regreso

int main() 
{ 
    int a, b, res;
    
    printf("Dame el primer valor: ");
    scanf("%d", &a);
    printf("Dane el segundo valor: ");
    scanf("%d", &b);
    sumar(); // llamado de la función suma 
    res = suma2(a, b);
    
    printf("El resultado de la suma es %d\n", res);
    return 0;
} 

void sumar() // función suma 
{ 
    int z, x=5, y=10; //variables locales 
    z=x+y; 
    printf("El resultado es: %i",z); 
}

int suma2(int a, int b)
{
    return a + b;
}
