#include <stdio.h>
/* if (x==7) {
   z=12;
}

   else {
       if (y==12) {
          z=20;
       }
       else {
           z=-90;
       }
   }
   bunu switch haline getirelim */
   
   int main () 
   {
   int x,y,z;
   
   printf("enter x and y:");
   scanf("%d %d", &x,&y);
   
   switch (x) {  //if kısmı
       case 7: z=12;
       break;
       
       default: switch(y) {  // else kısmı
       case 12: z=20;
       break;
      
       default: z=-90;
       }
   }
   
   printf(" this is your z : %d",z);
   
   return 0;
   }
