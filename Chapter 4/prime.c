#include <stdio.h>

int main(){
int i=2,n,prime=1;
printf("Enter the number to check whether a number is prime or not\n");
scanf("%d",&n);

while (i<=n)
{
   if(n%i==0){
       prime=0;
       break;
   }
}
if(prime==0){
    printf("This is not a prime number");
}else{
    printf("This is a prime number");
}


return 0;
}
