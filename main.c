#include <stdio.h>
struct customer{
		char name[30];
		int meter_number;
		int phone_number;
		int category;//domestic, commercial, industrial
		float units_balance;
	}customers[100];
int main(){
	//take details of customers
	for(int i=0; i<100; ++i){
		printf("for customer %d:\n", i+1);
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
	}
	
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
	
	



return 0;}
