// Online C compiler to run C program online
#include <stdio.h>
//special number abcd=(ab+cd)square
int main() {
   
   int number,n1,n2,n3,n4,total;
   
   printf("enter number:");
   scanf("%d", &number);
   
   n1=number/1000; //a
   
   n2=(number%1000)/100; //b
   
   n3=(number%100)/10; //c
   
   n4=number%10;  //d
   
   total= ((10*n1+n2)+(10*n3+n4))*((10*n1+n2)+(10*n3+n4));
   
   if (number==total) {
       printf("it is a speacial number");
   }
   
   else {
       printf("it is not special number");
   }
   
   return 0;
   
   
}
