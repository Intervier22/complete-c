#include <stdio.h>

int main(){
    int year;


    printf("Enter the year\n");
    scanf("%d", year );

    if(year/4){
        printf("It is is a leap year");

    }
    else
    {
        printf("It is not leap year");
    }
    
    
}