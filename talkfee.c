#include <stdio.h>

int main() {
   
   const float sabit= 0.30;
   float süre,total;
   
   
   printf(" asim dakika sürenizi girin:");
   scanf("%f", &süre);
   
   if ( süre>=4 ) {
       total= sabit+((süre-4)*0.07);
       
       printf("borcunuz : %.2f tl",total);
   }
   
   else {
       printf("borcunuz: 0.30 tl");
   }
    return 0;
}
