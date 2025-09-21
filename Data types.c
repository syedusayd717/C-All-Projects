#include<stdio.h>
int main (){
    int number;
    float number1;
    char value;
    double value1;

    printf("Data types!\n\n");
    
    printf("There are four primary data types which we use:\n");
    printf("Character data type\n");
    printf("Integer data type\n");
    printf("Float  data type\n");
    printf("Double data type\n\n");
    
    printf("And are represented by:\n");
    printf("Character is percent c\n");
    printf("Integer is  percent d\n");
    printf("Float is percent f\n");
    printf("Double is percent lf\n\n");
    
    printf("Some of the examples of data types are:\n");
    
    printf("Enter an Integer: ");
    scanf("%d", &number);
    printf("The Integer is: %d\n", number);
    
    printf("Enter a float number: ");
    scanf("%f", &number1);
    printf("The Decimal number is: %f\n", number1);
    
    printf("Enter any Character: ");
    scanf(" %c", &value); // space before %c important
    printf("The Character is: %c\n", value);
    
    printf("Enter a decimal value with more than 6 digits after the point: ");
    scanf("%lf", &value1);
    printf("The long Decimal value is: %.10lf\n", value1);
    return 0;
}

