 /*markustnt*/
 
//Programma indovina il numero

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
main()
{
	int secret, n; /*variabili*/
	
	srand(time(NULL));
	secret = rand()% 10+1;     /*funzione random*/
	
	printf("%d", secret);
	
	printf("\nIndovina il numero da 1 a 100");
	printf("\nInserisci il numero da te pensato (tentativo n1): ");
	scanf("%d", &n);
	
	if (n==secret) 
	    printf("Hai vinto");
	    
	if (n>secret)
	    {
		printf("Sbagliato, numero troppo alto");
	    printf("\n\nIl numero era: ");
        printf("%d", secret);
		}
    
	if (n<secret)
	    {
		printf("Sbagliato, numero troppo basso");
	    printf("\n\nIl numero era: ");
        printf("%d", secret);
		}
		
	getchart();
	
}
