#include <stdio.h>

int main() {
    int hedef=4;
    int sayı;
    
    printf("guess the number(1-20):\n");
    scanf("%d",&sayı);
    
    
    while (hedef!=sayı) { //sayı hedeften farklı mı diye sorar, farklıysa döngüye girer,
       
       if(sayı>hedef) {  //sayı 5 ise bu döngüye girer ve scanf ile yeni sayı girmeni ister,
                         //yeni girdiğin sayı için yine while ın başına gider
                         //kontrol eder yeni girilen sayı hedef ile aynı değilse tekrar döngüye girer
                         
           printf("daha küçük bir sayı giriniz:");
           scanf("%d",&sayı);
       }
       else if(sayı<hedef) {
           printf("daha büyük bir sayı girin:");
           scanf("%d",&sayı);
       } }
       
       printf("doğru bildin sayı: %d",sayı);  //4 girdiğin anda while döngüsüne girmez ve ekrana bunu yazar
     
       
       return 0;
    }
