 /*markustnt*/
 
 /*
     Costanti
 */
 
#include<stdio.h>
int base, altezza; /*Variabili globali. Usano pi� memoria.*/
main()
{
	int area; /*Variabile locale. Usa meno memoria.*/
	base = 3;
	altezza = 5;
	area = base*altezza;
	printf("%d", area);
}
