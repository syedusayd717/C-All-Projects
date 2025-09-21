#include<stdio.h>
int main (){
	//An example of logical OR op is to check
	//suppose going to check for discount!
	int num1;
	int num2;
	int price;
	
	printf("The use of logical operators!\n");
	printf("Seocnd one is Logical OR ops (||)\n\n");
	
	printf("Enter the Starting Range price:");
	scanf("%d",&num1);
	
		printf("Enter the Ending Range price:");
	scanf("%d",&num2);
	
		printf("Enter the Price of the product:");
	scanf("%d",&price);
	
	if (num1>price || price<num2){
		printf("Discount is applicable!");
	}
	else {
		printf("Discont not to be given!");
	}
	return 0;
}
