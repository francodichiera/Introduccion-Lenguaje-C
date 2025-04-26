
/*18) Ingresar 15 números , averiguar al mayor y al menor, mostrar a todos los ingresados
en forma de lista y al mayor y al menor.*/

#define maximos 5
void main (void)
{
	int a, num[maximos], mayor, menor;
	
	for(a=0; a<maximos;a++)
	{
		printf("Ingrese (numero %d):", a+1);
		scanf("%d", &num[a] );

	if (a==0)
	{
		menor=num[a];
		mayor=num[a];
	}	
	if(menor>num[a])
	{
		menor=num[a];
		printf("%d", menor);
	}
	
	if(mayor<num[a])
	{
		mayor=num[a];
		printf("%d", mayor);
	}
}

	//repite el primer numero infinitas veces
	for(a=0;a<maximos; a++)
	{
		printf("\nnumero %d : %d\n", a+1, num[a]); 
	}
	printf("\nEl mayor numero ingresado es: %d", mayor);
	printf("\nEl menor numero ingresado es: %d", menor);
	
}
