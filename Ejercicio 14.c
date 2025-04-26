/* 14) Pedir al operador que ingrese 20 números enteros distintos de 0, mayores a 100 y
menores a 300. El programa debe terminar con la palabra “FINAL”. Mostrar por
pantalla al final del programa los números que fueron ingresados, la suma y el promedio.*/

#define maximo 5

void main(void)
{
	int a, num[maximo], suma=0;
	float prom;
	
	for(a=0; a<maximo; a++)
	{
		printf("Ingrese (numero %d):", a+1);
		scanf("%d", &num[a]);
		
		while (num[a]<101 || num[a]>299)
		{
			printf("Numero ingresado incorrecto, ingrese (numero %d):", a+1);
			scanf("%d", &num[a]);
		}
	}
	
	//repite el primer numero infinitas veces
	for(a=0;a<maximo; a++)
	{
		printf("numero %d : %d\n", a+1, num[a]);
		suma= suma+num[a];
	}
	
	prom=(float) suma/maximo;
	 printf("El promedio de todos los numeros es: %f\n", prom);
     printf("La suma de todos los numeros es: %d\n", suma);
     printf("\nFINAL");
	
	getch();
}