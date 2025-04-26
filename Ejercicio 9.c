// Ejercicio 9

void main (void)
 {
    int a, num, par = 0, impar = 0;

    for (a = 0; a < 20; a++) 
	{
    printf("\nIngrese numero entero positivo mayor a 1000 (numero %d): ", a + 1);
    scanf("%d", &num);
    
    while (num <= 1000) 
	{
    printf("\nNumero incorrecto, por favor ingrese un numero > 1000: ");
    scanf("%d", &num);
    }

    if (num % 2 == 0) 
	{ printf("Numero ingresado es par!\n", par++); 
    }  
	else 
	{ printf("Numero ingresado es impar!\n", impar++);
    }
    
    }
    printf("\nCantidad de numeros pares: %d\n", par);
    printf("Cantidad de numeros impares: %d\n", impar);

    getch();
}