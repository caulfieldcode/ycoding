#include <stdio.h>
/* bir markette satılan toplam ürün sayısını gösteren bi kod yazılacak örneğin pazartesi:2 salı:3 ürün satıldıysa ve salı  o güne kadar toplam  ürün sayısını istiyorsam çıktı 5 olmalı , switch ile yapılacak */

int main ()
{
  int product=0;
  int day=0;
  char *dayname;
  
  printf("enter your number of day (1-7):");
  scanf("%d", &day);
  
  
  switch (day) {
      
      case 7: 
      product+=3;
      if (day==7) {dayname="sunday";}
  
      case 6:
      product+=4;
      if (day==6) {dayname= "saturday";}
      
      case 5:
      product+=1;
      if (day==5) {dayname= "friday";}
      
      case 4:
      product+=2;
      if (day==4) {dayname="thursday";}
      
      case 3:
      product+=3;
      if (day==3) {dayname="wednesday";}
      
      case 2:
      product+=0;
      if (day==2) {dayname="tuesday";}
      
      case 1:
      product+=5;
      if (day==1) {dayname="monday";}
      break;
      
      default: printf("day is not exist");
  }
  
  printf(" this is your day: %s \n this is your sum product: %d",dayname,product);
  
  return 0;
  }
  
  // günleri if ile kullanmasaydık sonuç gün her zaman monday çıkardı cunku günler aşşağıya doğru akıyor ve değişiyor if ile çıkıcak günü kesinleştirdik
  
  // tersten yazmamızın sebebi gün 2 yken altında sadece gün 1 olması ve yukarıdan aşşağıya doğru toplamasından kaynaklı
  
  //eğer case 1 den başlayıp 7 ye gitseydik, case 1 yazdığımızda aşşağıya doğru hepsini toplardı,break kullanmama sebebimizde case den çıkmayıp aşşağıya doğru toplamak istememizdir.
