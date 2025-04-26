//Ejercicio 3:
void main (void)
{
 int num1, num2, suma;
 // Ingresar el primer Numero
 printf("Ingrese num1:");
 scanf("%d", & num1);
 // Ingresar el segundo numero
 printf("Ingrese num2:");
 scanf("%d", & num2);
 suma=num1 + num2;
 printf("La suma es: %d", suma);
 getch();
}

// Otra forma de realizarlo
void main (void)
{
 int num1, num2;
 // Ingresar el primer Numero
 printf("Ingrese num1:");
 scanf("%d", & num1);
 // Ingresar el segundo numero
 printf("Ingrese num2:");
 scanf("%d", & num2);
 printf("La suma es: %d", num1 + num2);
 getch();
}