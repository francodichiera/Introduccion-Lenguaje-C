// Ejercicio 7

void main (void)
{	
 int a, num, suma=0;
 float prom;

 for (a=0; a<15; a++)
 { printf("\n Ingrese Numero %d :", a + 1);
   scanf("%d", & num);
   
   while (num<1)
   {
   	printf ("Numero ingresado negativo, por favor ingrese un numero de nuevo:");
   	scanf("%d", & num);
   }
   printf("numero %d : %d", a + 1, num);  
   suma+= num; // Agrega el numero a la suma
 }
 prom= (float) suma / 15;
 printf ("\n \n  El promedio de todos los numeros es: %f", prom);
 getch();
}