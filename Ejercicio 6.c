// Otra forma ejercicio 6
void main (void)
{
int a, num, suma=0;
// for lo utilizo de ante mano cuando conozco la cantidad numeros que vas a ingresar
for (a=0; a<10; a++) 
{
printf ("\n Ingrese numero %d:", a + 1);	
scanf("%d", &num);
printf ("\n numero %d : %d", a +1 , num);
suma= suma + num;
}
printf("\n La suma de todos los numeros es:%d", suma);
getch();
}


//Ejercicio 6 forma 1 sin for
void main (void)
{
int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, suma;
 printf("Indique num1:");
 scanf("%d", & num1);
 printf("Indique num2:");
 scanf("%d", & num2);
 printf("Indique num3:");
 scanf("%d", & num3);
 printf("Indique num4:");
 scanf("%d", & num4);
 printf("Indique num5:");
 scanf("%d", & num5);
 printf("Indique num6:");
 scanf("%d", & num6);
 printf("Indique num7:");
 scanf("%d", & num7);
 printf("Indique num8:");
 scanf("%d", & num8 );
 printf("Indique num9:");
 scanf("%d", & num9);
 printf("Indique num10:");
 scanf("%d", & num10);
 suma=num1+ num2+ num3+ num4+ num5+ num6+ num7+ num8+ num9+ num10;
 printf("La suma es: %d \n VLLC!", suma);
 getch();
}



