//markusTNT
//Ciclo FOR

#include<stdio.h>
main(){
	
	
	int numero, tabellina, i, risultato;
	numero=0;
	
	
	printf("\n\n**********TABELLINE**********");
	printf("\nQuale tabellina uoi imparare?");
	
	printf("\n\nDigita il numero:");
	scanf("%d",&tabellina);
	

    printf("\n\n**********Tabellina del %d**********", tabellina);
	/*CICLO FOR*/
	for(i=0;i<=10;i=i+1){
		risultato=numero*tabellina;
	
	    printf("\n %d",numero);
	    printf(" * %d",tabellina);
	    printf(" = %d", risultato); 
	   
	    numero=numero+1;  
    }
	
}
