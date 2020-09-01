#include <stdio.h>
int main(){
    float radius;
    float pi=22/7;
    
    printf("What is the radius");
    scanf("%f", &radius );

    printf("The circumfrence =" , pi*radius*radius );
    return 0;
}