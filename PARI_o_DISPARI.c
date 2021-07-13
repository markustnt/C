//markusTNT
//PROGRAMMA PARI O DISPARI

#include<stdio.h>
main()
{
	int numero;
	
	printf("Inserisci un numero:");
	scanf("%d", &numero);
	
	numero = numero%2;
	
	if (numero==0){
		printf("\nIl numero e' PARI!!!");
	}
	
	if (numero==1){
		printf("\nIl numero e' DISPARI!!!");
	}
	
	printf("\n\n********** FINE PROGRAMMA **********");
}
