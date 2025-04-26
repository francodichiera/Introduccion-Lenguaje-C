/* 15) Ingresar una serie de números enteros debiéndose averiguar la cantidad de enteros
positivos y la cantidad de negativos. Realizar la sumatoria , si el resultado es positivo,
mostrar la cantidad de números positivos y si es negativo, mostrar el resultado de la suma.*/

void main (void)
{
	int num, suma = 0, positivos = 0, negativos = 0, tecla=1;
	

    while(tecla==1) 
    {	
    	printf("Ingrese numero:");
        scanf("%d", & num);

        if (num > 0) {
            positivos++;
        } if (num < 0) {
            negativos++;
        }
        
		printf("\nIngresar 1 para ingresar otro numero: ");
		printf("\nIngresar otro numero para salir:\n ");
		scanf("%d", & tecla);
		
        suma=suma+num;
    }

    if (suma > 0) {
        printf("La cantidad de numeros positivos es: %d\n", positivos);
    } if(suma< 0) {
        printf("La suma de los numeros es: %d\n", suma);
    
    //NO ESTA EN LA CONSIGNA PERO ES UNA 3RA POSIBILIDAD
    
	if(suma==0) // = declara un valor, == es una pregunta si llega  a pasar
	  printf("\nLa suma de todos los numeros es 0");  
        getch();
    }
}