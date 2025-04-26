//Ejercicio 5
void main (void)
{
 int num1, num2, num3, num4, num5;
 // Ingresar el primer Numero
 printf("Ingrese num1:");
 scanf("%d", & num1);
 // Ingresar el segundo numero
 printf("Ingrese num2:");
 scanf("%d", & num2);
 // Ingresar el tercer numero
 printf("Ingrese num3:");
 scanf("%d", & num3);
 // Ingresar el Cuarto numero
 printf("Ingrese num4:");
 scanf("%d", & num4);
 // Ingresar el Quinto numero
 printf("Ingrese num5:");
 scanf("%d", & num5);
 
// Encontrar el mayor número
 int mayor = num1;
    
    if (num2 > mayor) {
        mayor = num2;
    }
    
    if (num3 > mayor) {
        mayor = num3;
    }
    
    if (num4 > mayor) {
        mayor = num4;
    }
    
    if (num5 > mayor) {
        mayor = num5;
    }
    // Mostrar el resultado
    printf("El mayor numero es: %d\n", mayor);
    getch();
}


// Otra forma ejercicio 5
void main (void)
{

int a, mayor, num;
// for lo utilizo de ante mano cuando conozco la cantidad numeros que vas a ingresar
for (a=0; a<5; a++) 
{
printf ("\n Ingrese numero %d:", a + 1);
scanf ("%d", & num);
if (a==0)
{
mayor=num;
}
if(mayor<num)
{
mayor=num;
}
}
printf("El mayor numero es: %d\n", mayor);
getch(); 
}