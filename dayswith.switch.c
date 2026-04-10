#include <stdio.h>
//switch kullanımı
int main() {
  
  int day;
  printf("What number day of the week is today?:");
  scanf("%d",&day);
  
  switch (day) {
      case 1: printf("monday");
      break;
      case 2: printf("tuesday");
      break;
      case 3: printf("wednesday");  
      // mesela bu case e break koymazsan ve 3 girersen çıktıda: wednesday ve thursday gorursun
      break;
      case 4: printf("thursday");
      break;
      case 5: printf("friday");
      break;
      case 6: printf("saturday");
      break;
      case 7: printf("sunday");
      break;
      
      default: printf(" geçersiz sayı girdiniz"); 
      //eğer case lerden hiç biri uymazsa default döner.
      // break yazmazsan dngüden çıkmaz ve break ya da return 0 görene kadar yazmaya devam eder caseleri 
  }

    return 0;
}
