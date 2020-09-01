#include <stdio.h>

int main()
{
    float num1, num2, num3, num4;
printf("enter number");
scanf("%f %f %f %f",num1 , num2 , num3  , num4);

   if(num1>num2){
       if(num1>num3){
           if(num1>num4){
               printf("%f is big",num1);
           }
           else{
               printf("%f is big",num4);
           }
       }
   }
   else if (num2>num3){
       if(num2>num4){
           printf("%f is big",num2);
       }
       else{
           printf("%f id big",num4);
       }
   }
   else if(num3>num4){
      printf("%f is big0",num3);
   }
   else
   {
       printf("%f is big",num4);
   }
   
  
   

}