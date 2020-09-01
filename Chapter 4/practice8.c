#include <stdio.h>

int main(){
int i=1,n,factorial=1;
printf("Enter the number which you want to take out factorial\n");
scanf("%d",&n);

while (i<=n)
{
   factorial *=i;
   i++;
}
printf("The factorial of number %d is %d",n,factorial);


return 0;
}
