#include <stdio.h>
#include <stdlib.h>

/*Realizar un programa que pida al usuario 10 numeros enteros positivos menores a 21. Se pide al final del programa:
 Se muestre en pantalla la sumatoria de todos los numeros
 Se muestre el promedio de los numeros ingresados 
 Se indique en pantalla si el primer numero ingresado correctamente es par 
 Se indique en pantalla si el ultimo numero ingresado correctamente es impar.
*/
void main (void)
{

	int a,num,suma=0, par=0, impar=0;
	float prom;
	
	for(a=0;a<10;a++)
	{
		printf("\nIngrese (numero %d):", a+1);
		scanf ("%d", &num);
		
		while (num<1 || num>=21)
		{
			printf("\nNumero ingresado incorrecto, ingrese nuevamente (numero %d):", a+1);
			scanf("%d", &num);
		}
		
		if(a==0 && num%2==0)
		{
			par=53;
			}
			
			if(a==9 && num%2==1)
		{
			impar=100;
			}	
				
		suma=suma+num; // sumas parciales va sumando a partir que se va ingresando lo puede prguntar
	}
	prom=(float) suma/10;
	
	printf("\nLa sumatoria de todos los numeros es: %d", suma);
	printf("\nEl promedio de los numeros ingresados es: %f", prom);
	
	if(par==53)
	{
		printf("\nEl primer numero ingresado es par!");
	}
	
	if(impar==100)
	{
		printf("\nEl ultimo numero ingresado es impar!");
	}
	getch();
}