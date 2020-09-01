#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
int n,guess,nguess=1;
srand((time(0)));
n=rand()%100 + 1;
// printf("The number is %d",);

printf("\t\t\t\t\t*****Welcome to my 1st Game*****\n\n");
printf("In this Game you will generate a random number you have to guess it in least attempts\n");

do
{
    printf("Enter the number you have guessed\n");
    scanf("%d",&guess);
    
    if(guess>n){
        printf("Lower the number please!\n");
    }else if(guess<n){
        printf("Higher the number please!\n");
    }
    else
    {
        printf("You guessed in %d attempt",nguess);
    }
    nguess++;
    
} while (guess!=n);


return 0;
}
