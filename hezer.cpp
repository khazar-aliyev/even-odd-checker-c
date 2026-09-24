#include <stdio.h>
#include <stdbool.h>
int main(){
   int number;
   printf("Enter your number\n");
   scanf("%d",&number);
  
   (number%2==0)?printf("Your number is even"):printf("Your number is odd");
   return 0;
}

