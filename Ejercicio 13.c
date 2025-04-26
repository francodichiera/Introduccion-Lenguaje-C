/*13) Pedir al operador que ingrese 2 números enteros positivos distintos entre si.
Determinar cuál es el mayor, e indicar cuanto es el mayor dividido el menor, sin usar
division. */

void main (void)
{
	int a, num, mayor;
	float prom;
	
	for(a=0;a<2;a++)
	{
		printf("\nIngrese (numero %d):", a+1);
		scanf ("%d", &num);
		
		while (num<1 || a==num)
		{
			printf("\nNumero ingresado incorrecto, ingrese nuevamente (numero %d):", a+1);
			scanf("%d", &num);
		}
		
		if (a==0)
	{
		mayor=num;
	}
		if(mayor<num)
	{
		mayor=num;
	}
	while(){
	}
	
	}
}
	mayor%
			
	}

// FORMA AYUDA CON CHAT GPT

/*13) Pedir al operador que ingrese 2 números enteros positivos distintos entre si.
Determinar cuál es el mayor, e indicar cuanto es el mayor dividido el menor, sin usar
division. */

int main(void)
{
    int num1, num2, mayor, menor, cociente = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    while (num1 < 1)
    {
        printf("Número ingresado incorrecto, ingrese nuevamente el primer numero: ");
        scanf("%d", &num1);
    }

    printf("Ingrese el segundo numero (distinto al primero): ");
    scanf("%d", &num2);

    while (num2 < 1 || num2 == num1)
    {
        printf("Número ingresado incorrecto, ingrese nuevamente el segundo numero: ");
        scanf("%d", &num2);
    }

    if (num1 > num2)
    {
        mayor = num1;
        menor = num2;
    }
    else
    {
        mayor = num2;
        menor = num1;
    }

    while (mayor >= menor)
    {
        mayor = mayor - menor;
        cociente++;
    }

    printf("El mayor dividido por el menor es: %f\n", cociente);

    return 0;
}