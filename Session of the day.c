#include<stdio.h>
int main (){
    
    int timing;
    printf("Enter the current time:");
    scanf("%d",&timing);
    
    if (timing<=12){
        printf("It is Morning");
    }
    
    else if (timing<=18){
        printf("It is Afternoon");
    }
    
    else {
    printf ("It is Night");
    }
    
    return 0;
}


