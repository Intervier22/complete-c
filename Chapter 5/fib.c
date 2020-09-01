#include<stdio.h>
int Fibonacci(int n);

int main(){

int n;
printf("Enter the n value: ");
scanf("%d", &n);
printf("%d", Fibonacci(n - 1));
}
int Fibonacci(int n){


if (n <= 1) {

return n; 
}
else{

return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
}


