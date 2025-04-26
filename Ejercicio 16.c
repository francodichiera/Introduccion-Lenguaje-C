/*16) Ingresar 12 números y mostrarlos en forma de lista al final del programa. */

#define maximos 12
void main (void)
{
	int a, num[maximos];
	
	for(a=0; a<12; a++)
	{
		printf("Ingrese (numero %d): ", a+1);
		scanf("%d", &num[a] );

	}
	
	//repite el primer numero infinitas veces
	for(a=0;a<maximos; a++)
	{
		printf("\nnumero %d : %d\n", a+1, num[a]);
	

	}
	getch();
	
}

