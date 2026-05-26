#include <stdio.h>
int main (void){
  struct customer{
		char name[30];
		int meter_number;
		int phone_number;
		int category;//domestic, commercial, industrial
		float units_balance;
	}customers[100];
int main(){
	int option;
	print("MENU\n");
	printf("Choose option\n");
	printf("1.Register customer\n");
	printf("2.Buy electricity tokens\n");
	printf("3.Check units\n");
	printf("4.Exit\n");
	scanf("%d",&option);
	
	switch(option){
	case 1; 
		printf("Enter name:\n");
		scanf("%s", &customers[i].name);
			printf("Enter meter number:\n");
		scanf("%d", &customers[i].meter_number);
			printf("Enter phone number:\n");
		scanf("%d", &customers[i].phone_number);
			printf("Enter category, 1 for domestic, 2 for commercial, 3 for industrial:\n");
		scanf("%d", &customers[i].category);
			printf("Enter units remaining:\n");
		scanf("%f", &customers[i].units_balance);
		break;
		
	case 2;
		printf("Enter your meter number: ");
		int number2;
		if(number2==customers,meter_number){
			//payment for the units
	    int payment;
	    printf("Enter amount in UGX for electricity to purchase: ");
	    scanf("%d", &payment);
	    for(payment>0){
		int amount=payment;
		if(.category==1){
		amount=payment-600;
		}
		else if(.category==2){
			amount=payment-800;
		}
		else{
			amount=payment-1000;
		}
		if(amount<=500){
			printf("Insufficient payment\n");
		}
		else{
			int units_purchased=amount/500;
		}
	
	
}



return 0;}
