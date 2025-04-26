// Ejercicio 11

void main (void)
{
    int a, num, mayor=12, orden, par=0; // 0 en par es el estado de que no hay ningun par 

for (a=0;a<30;a++)
{ 
printf ("Ingrese 30 numeros enteros mayores a 12 (numero %d):", a+1);
scanf ("%d", &num);

while (num<13)
{ printf ("El numero ingresado es incorrecto");
 scanf("%d" , & num);
}
 if (num%2 == 0)
{ 
par=2;    // 2 en par es el estado de que hay par es como true
if (mayor<num)
{ mayor = num;
  orden= a + 1; // porque el for al principio a=0 , cada vez que hace una pasada cuando termina a se le suma 1 
 }
}
}
if (par==0)
{
printf ("AVISO NO INGRESASTE NINGUN NUMERO PAR");

}
else
{
printf ("El mayor numero par ingresado es: %d y el numero de orden que ingreso fue: %d", mayor, orden);
}
 getch();
}



// Forma un poco mas ahorrativa 
// Ejercicio 11

void main (void)
{
    int a, num, mayor=12, orden; 
	for (a=0;a<30;a++)
{ 
	printf ("Ingrese 30 numeros enteros mayores a 12 (numero %d):", a+1);
	scanf ("%d", &num);

	while (num<13)
{ 	printf ("El numero ingresado es incorrecto");
 	scanf("%d" , & num);
}
	if (num%2 == 0)
{ 
	if (mayor<num)
{ mayor = num;
  orden= a + 1; // porque el for al principio a=0 , cada vez que hace una pasada cuando termina a se le suma 1 
 }
}
}
	if (mayor==12)
{
	printf ("AVISO NO INGRESASTE NINGUN NUMERO PAR");

}
	else
{
	printf ("El mayor numero par ingresado es: %d y el numero de orden que ingreso fue: %d", mayor, orden);
}
 getch();
}