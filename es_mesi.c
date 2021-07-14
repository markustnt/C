//markusTNT

#include<stdio.h>

main(){
	int mese;
	
	printf("Inserisci il numero del mese: ");
	scanf("%d", &mese);
	
	switch (mese){
		
		case 1: printf("\nGennaio");
		break;
		
		case 2: printf("\nFebbraio");
		break;
		
		case 3: printf("\nMarzo");
		break;
		
		case 4: printf("\nAprile");
		break;
		
		case 5: printf("\nMaggio");
		break;
		
		case 6: printf("\nGiugno");
		break;
		
		case 7: printf("\nLuglio");
		break;
		
		case 8: printf("\nAgosto");
		break;
		
		case 9: printf("\nSettembre");
		break;
		
		case 10: printf("\nOttobre");
		break;
		
		case 11: printf("\nNovembre");
		break;
		
		case 12: printf("\nDicembre");
		break;
		
		default: printf("Numero non valido");
		break;
	}
	
	printf("\n\n\n\n*********************** FINE PROGRAMMA ***********************");
	
}
