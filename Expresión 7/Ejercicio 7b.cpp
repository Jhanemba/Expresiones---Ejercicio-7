/*
Ejercicio 7: La calificaci�n final de un estudiante es la media ponderada
de tres notas: la nota de pr�cticas que cuenta un 30% del total,
la nota te�rica que cuenta un 60% y la nota de participaci�n que cuenta
el 10% restante. Escriba un programa que lea de la entrada est�ndar
las tres notas de un alumno y escriba en la salida est�ndar su nota final.
*/
#include <iostream>
using namespace std;

int main()
{
	float nota1, nota2, nota3, notaFinal;

	cout << "Introduzca sobre 100 la nota de practicas(30%): \n"; cin >> nota1;
	cout << "Introduzca sobre 100 la nota de la parte teorica(60%): \n"; cin >> nota2;
	cout << "Introduzca sobre 100 la nota de participacion(30%): \n"; cin >> nota3;

	nota1 *= 0.30; //Esta expresi�n es igual a: nota1 = nota1 * 0.30
	nota2 *= 0.60; //"
	nota3 *= 0.10; //"
	notaFinal = nota1 + nota2 + nota3;

	cout.precision(7);//Esto solo es un filtro por si el decimal es muy grando y no se vea feo xD
	cout << "La nota final es: " << notaFinal << endl;

	return 0;
}