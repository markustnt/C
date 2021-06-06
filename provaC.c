 /*markustnt*/
 
//Calcolo area di un rettangolo

/*Input e Output*/
 
#include <stdio.h>
main()
{
	//dichiarazione variabili
	int base, altezza, area;
	
	//input e output
	printf("\n\n Calcolo dell'area di un rettangolo");
	
	//base
	printf("\n\n Con base: ");
	scanf("%d", &base);
	
	//altezza
	printf(" Con altezza: ");
	scanf("%d", &altezza);
	
	//calcolo area
	area = base*altezza;
	
	//Output video dell risultato
	printf("\n Area = %d", area);
	
	getchar();
}
