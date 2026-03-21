#include <stdio.h>
#include <string.h>

int main() {
   
 int number1,number2;
 
 printf("choose 2 number:");
 scanf("%d %d", &number1,&number2);
 
 if (number1<number2) {
     printf(" %d greater than %d", number2,number1); }
     
     else if (number1>number2) {
         printf("%d greater than %d", number1,number2);}
         
         else { printf("%d equal to %d", number1,number2); }
         
     return 0;
 }
 
