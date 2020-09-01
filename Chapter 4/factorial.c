#include <stdio.h>

int main(){
int i,n,factorial=1;
printf("Enter your number\n");
scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
    factorial *=i;
}
printf("The factoial of %d id %d",n,factorial);
return 0;
}
