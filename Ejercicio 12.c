void main (void)
{
	int a, num, par=0, suma=0, menor, orden;
	float prom;
	
	for(a=0;a<10;a++)
	{
		printf("\nIngrese (numero %d):", a+1);
		scanf ("%d", &num);
		
		while (num<15 || num%2!=0)
		{
			printf("\nNumero ingresado incorrecto, ingrese nuevamente (numero %d):", a+1);
			scanf("%d", &num);
		}
		
		if (a==0)
		{
		menor=num;
		orden= 1;
		}

		if (menor>num)
		{ menor = num;
  		orden= a + 1; // porque el for al principio a=0 , cada vez que hace una pasada cuando termina a se le suma 1 
 	
		}
		
		suma=suma+num; // sumas parciales va sumando a partir que se va ingresando lo puede prguntar
	}		
						
	prom=(float) suma/10;
	
	printf("\nLa sumatoria de todos los numeros es: %d", suma);
	printf("\nEl promedio de los numeros ingresados es: %f", prom);
	printf("\nEl menor numero de orden que ingreso es: %d", orden);
	

	getch();
}