//SWITCH CASE

#include<stdio.h>
main()
{
	int numero;
	printf("Inserisci un numero tra 1 e 5: ");
	scanf("%d", &numero);
	
	switch(numero){
		case 1: printf("\n\nUNO");
		break;
		
		case 2: printf("\n\nDUE");
		break;
		
		case 3: printf("\n\nTRE");
		break;
		
		case 4: printf("\n\nQUATTRO");
		break;
		
		case 5: printf("\n\nCINQUE");
		break;
	}
}
