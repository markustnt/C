//markusTNT
//Password game

#include<stdio.h>
#include<windows.h>
main(){
	//variables
	int i, password, password1, attempt;
	attempt=0; /*attempt of password*/
	
	printf("\n\t\t\t\t\tPassword Simulator");
	printf("\n\n\nRegister your password:");
	
  /*Registration of the password*/
  scanf("%d",&password);  
	printf("%d", password);
	
  /*confirmation of the password*/
	printf("\n\nConfirm your password password:");
	scanf("%d",&password1);  
	
  /*If password isn't correct*/
	if (password!=password1){      
		/*3 attempts*/
		for (i=1; i<=3; i++){      
		attempt=attempt+1;
		printf("\n(Error, attempt number %d/3)", attempt);
		printf("\n\nConfirm your password password:");
		scanf("%d",&password1);
		
		  if (password==password1){  /*when the password is correct*/
			 printf("\nCORRECT");
			 printf("\n\nAccess...");
			 i=10;
		   }
	       else  {
	       	 printf("NOT CORRECT");  /*when the password  isn't correct*/
	   }
	}
	 
	
	printf("\n\n\n\n\n\n***************** END PROGRAM *****************");
}
}
