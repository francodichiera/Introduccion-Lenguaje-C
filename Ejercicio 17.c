/*17) Ingresar 20 números , sumarlos, mostrar al final del programa a los numeros ingresados en forma de lista y al resultado de la suma. */

#define maximos 10
void main (void)
{
	int a, num[maximos], suma=0;
	
	for(a=0; a<maximos; a++)
	{
		printf("Ingrese (numero %d): ", a+1);
		scanf("%d", &num[a] );
		suma=suma+num[a];
	}

	//repite el primer numero infinitas veces
	for(a=0;a<maximos; a++)
	{
		printf("\nnumero %d : %d\n", a+1, num[a]);
	 
	}
		 
		printf("\na suma de todos los numeros es: %d", suma);
		
		getch();
		
}
	
