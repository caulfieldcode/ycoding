#include <stdio.h>
#include <math.h>
 
  int main()
  {
float ödenecekf,eskibf,yenibf;
float enflasyon,eskiaboneu,yeniaboneu;
float yeniokuma, eskiokuma,toplamelektrik;

printf("enflasyon oranı:\n");
scanf("%f", &enflasyon);

printf("eski birim fiyat:");
scanf("%f", &eskibf);

printf("eski abonelik fiyatı:\n");
scanf("%f", &eskiaboneu);

yeniaboneu= eskiaboneu+((eskiaboneu*enflasyon)/100);
yenibf= eskibf+((eskibf*enflasyon)/100);

printf("bu ayki harcanan elektrik:\n");
scanf("%f", &yeniokuma);

printf("eski ayki harcanan elektrik:\n");
scanf("%f", &eskiokuma);

toplamelektrik= fabs(eskiokuma-yeniokuma);

ödenecekf= (toplamelektrik*yenibf) + yeniaboneu;

printf("bu ayki faturan: %.2f", ödenecekf);
 return 0;
 
  }
   
   
