#include<stdio.h>
int main (){
	//best example of logical AND op is to check
	//greatest among 3 numbers!
	int num1;
	int num2;
	int num3;
	
	printf("The use of logical operators!\n");
	printf("First one is Logical And ops (&&)\n\n");
	
	printf("Enter the first number:");
	scanf("%d",&num1);
	
		printf("Enter the second number:");
	scanf("%d",&num2);
	
		printf("Enter the third number:");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3){
		printf("Num1 is greater amongst the three numbers!",num1,num2,num3);
	}
	else if (num2>num1 && num2>num3){
		printf("Num2 is greater amongst the tree numbers!");
	}
	else {
		printf("Num3 is greates amongst the three numbers!");
	}
	return 0;
}
