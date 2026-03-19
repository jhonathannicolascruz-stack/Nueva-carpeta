/*
 //Enunciado:Hacer un programa el cual permita que el usuario ingrese un valor y el programa lo transforme a fahrenheit
 
 
 E/P/S

Entrada
1. Pedir al usuario un valor entero o decimal
2.Validar que el valor no sea un numero negativo

Proceso

1.transformar el valor entero o decimal realizando la siguiente operacion:(celcius * 9/5)+ 32

Salida 


1.Mostrar el resultado de la operacion

#include <iostream>
using namespace std;
int main(){


//declaramos variables para guardar los valores de celsius y fahrenheit

double fahrenheit;
double celsius;

cout<<"Bienvenido a la calculadora de grados celsius";
 cout<<"Ingresa la cantidad que quieras transformar";
 cin>>celsius;
 //Leer el valor que ingreso el usuario
 //Validar que el valor no sea un numero negativo
if (celsius<0){
cout<<"El valor no puede ser negativo" << endl;
return 1;
}
//convertir los grados celsius a fahrenheit
Fahrenheit = (celsius * 9/5)+ 32;
//Mostrar el resultado
cout<<"La temperatura en Fahrabheit es:"<< fahrenheit << "°F" << endl;
return 0;
}
*/