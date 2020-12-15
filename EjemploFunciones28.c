#include <stdio.h>
//Programa que calcula el precio final de un producto añadiendo una
// tasa de impuestos
float PrecioFinal(float PrecioInicial, float impuesto); //Declarando la funcion de calculo de precio final
float Ini, Imp; //Variables globales (fuera de la funcion declarada)
// Programa principal
int main() {
  printf("Ingresa el precio inicial \n");
  scanf("%f",&Ini);
  printf("Ingresa la tasa de impuestos en decimal (ejemplo->10%%=0.1)\n");
  scanf("%f",&Imp);
  printf("El precio final a pagar es %3.2f",PrecioFinal(Ini,Imp));
}
// Se define la funcion a utilizar
float PrecioFinal(float PrecioInicial, float impuesto)
{
   float calculo; //Guardamos el calculo del precio final--> variable local
   calculo = PrecioInicial+PrecioInicial*impuesto;
   return calculo;
}
