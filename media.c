 /*markustnt*/
 
//Programma che calcola la media di 3 numeri.

#include <stdio.h>
main()
{
	int num1, num2, num3, media;
	
	printf(" Inserisci il primo numero: ");
	scanf("%d", &num1);
	
	printf("\n Inserisci il secondo numero: ");
	scanf("%d", &num2 );
	
	printf("\n Inserisci il terzo numero: ");
	scanf("%d", &num3 );
	
	media = (num1+num2+num3)/3;
	printf("\n\n Media: %d", media);
	
	getchart();
}
