// Ejercicio 10

void main (void)
{
    int a, num, par = 0, impar = 0, sumaparaprom = 0, suma = 0; // se pone =0 cuando se esta contando cantidades de algo 
    float prom;

    for (a = 0; a < 20; a++) 
	{
    printf("Ingrese un numero entero positivo mayor a 15 (numero %d): ", a + 1);
    scanf("%d", &num);
    
    while (num <= 15) 
	{ printf("Numero incorrecto, por favor ingrese un numero > 15: ");
	 scanf("%d", &num);
    }
      sumaparaprom += num;
      suma += num;

   if (num % 2 == 0) 
   {
   par= par + 1; // esto es lo mismo que poner luego del printf , par++
   printf("Numero ingresado es par!\n", par); // Luego de la variable va un ++ porque va sumando de a 1, el ++ es lo mismo que sumar de a 1
   }
   else 
   { 
   impar= impar + 1;
   printf("Numero ingresado es impar!\n", impar);
   }
   
    }

    printf("\nCantidad de numeros pares: %d\n", par);
    printf("Cantidad de numeros impares: %d\n", impar);

    prom = (float)sumaparaprom / 20;
    printf("El promedio de todos los numeros es: %f\n", prom);

    printf("La suma de todos los numeros es: %d\n", suma);
    getch();
}	