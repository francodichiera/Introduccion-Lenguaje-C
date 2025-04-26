void main (void)
{	
int a, num;

for (a=0; a<1; a++)
{ printf ("\n Ingrese numero entero positivo mayor a 10:", a + 1);
  scanf ("%d", & num);
  }
  while (num<=10)
  {printf ("\n Numero Ingresado incorrecto, por favor ingrese un numero > 10 : ", num);
   scanf ("%d", & num);
  } 
  
   if (num%2==0)
  {
  printf("\n Numero Ingresado es par!"); 
  }
  else 
  {
   printf("\n Numero ingresado es impar!"); 
  }
  getch();
}