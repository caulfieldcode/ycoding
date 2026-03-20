#include <stdio.h>

int main() {
  
  //girilen 4 sayının aritmetik ortalaması
  float number1, number2, number3, number4, total;
  
  printf("enter your numbers:");
  scanf("%f %f %f %f", &number1,&number2,&number3,&number4);
  
  total= (number1+number2+number3+number4)/4;
  
  printf("average: %.2f", total);
  
  return 0;
}
