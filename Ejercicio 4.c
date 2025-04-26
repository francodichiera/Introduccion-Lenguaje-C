//Ejercicio 4
void main (void)
{
 int num1, num2, num3, suma;
 // Ingresar el primer Numero
 printf("Ingrese num1:");
 scanf("%d", & num1);
 // Ingresar el segundo numero
 printf("Ingrese num2:");
 scanf("%d", & num2);
 // Ingresar el tercer numero
 printf("Ingrese num3:");
 scanf("%d", & num3);
 suma= num1 + num2 + num3;
 printf("La suma es: %d.", suma);
 if(suma<100)
 {printf("Es menor a 100!");
 }
 if (suma>100)
 {printf("Es mayor a 100!");
 }
 getch();
}