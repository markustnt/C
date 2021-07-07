//markusTNT

#include<stdio.h>
main()
{
	int base, altezza, area;

    base=3;
    altezza=1;
    area=base*altezza;

    printf("Area:%d", area);
    
    //Funzione and
    
   if(area>1 && area<5){
   	printf("\nsiuuummmm");
   }
   
   //Funzione Or
   if(area>1 || area<-5){
   	printf("\n VAMOS RAGA");
   }
   
   //Funzione Not
   if(area!=-25){
   	printf("\nGiuve");
   }
}
