#include <stdio.h>
#include <string.h>

int main()
{
   
long int n1,n2,n3;
 
 printf("choose 3 number:");
 scanf("%ld %ld %ld", &n1,&n2,&n3);
 
 
 if (n1>=n2 && n1>=n3) {
     printf("biggest number: %ld", n1);
 }
 
 else if (n2>=n1 && n2>=n3) {
     printf("biggest number: %ld", n2);
 }
    else {
        printf("biggest number: %ld", n3);
    }
         
     return 0;
 }
