#include <stdio.h>

int main() {
   
   int score,seçim;
   
   printf(" sınava girdin mi [evet:1 ,  hayır:0:)");
   scanf("%d",&seçim);
   
   
   if ( seçim==1 ) {
       printf("enter your score:");
       scanf("%d",&score);
      
       if(score>=60){
           printf("you passed");
       }
       else{
           printf("you didnt pass");
       }
   }
   
   else{
       printf("you will enter 23 march");
   }
    return 0;
}
