#include<stdio.h>
int main(){
int income;
	printf("\nHello!,Welcome to Annual prize.");
	printf("\nPlease enter your Annual Income:");
	scanf("%d",&income);


	printf("******************************************");
	
	if (income >= 100000){
		printf("\nYour Annual Income is %d .",income);
		printf("\nYour User Interest is online shopping");
		printf("\nYou will be given Cengkih Credit Card.");
   }		

	else if(income < 100000 && income >= 60000){
		int a;
		printf("\nYour Annual Income is &d .",income);
		printf("\nYou have 2 User Interest.");
		printf("\nYour User Interest is:");
		printf("\n1.flight ticket \n2.petrol");
		printf("\nPlease choose one: ");
		scanf("%d",&a);
	
	
		if(a==1){
			printf("\nYou have choose flight ticket.");
			printf("\nYou will be given Cendana Credit Card.");
		}
		
		else if (a==2){
			
			printf("\nYou have choose petrol.");
			printf("\nYou will be given Berlian Credit Card.");	
		}
	
	else
		printf("\nINVALID INPUT!!!!");

}

else if(income < 60000 && income >= 35000){
	int a;
	printf("\nYour Annual Income is &d .",income);
	printf("\nYou have 2 User Interest.");
	printf("\nYour User Interest is:");
	printf("\n1.groceries \n2.insurance coverage");
	printf("\nPlease choose one: ");
	scanf("\n%d",&a);
	
	if(a==1){
		printf("\nYou have choose groceries.");
		printf("\nYou will be given Meranti Credit Card.");
	}
	else if(a==2){
		printf("\nYou have choose insurance coverage.");
		printf("\nYou will be given Cengal Credit Card.");
	}
	else{
		printf("\nINVALID INPUT!!!!");
}
}
else{
printf("\nThere is no Interest below 35000.");
}
}
