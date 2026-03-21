#include <stdio.h>
#include <string.h>
//kitap siparişi ve indirim programı
int main()
{
   
int bookprice, orderquantity,nodiscountprice;
float discountrate,sum,discountprice;

bookprice= 12;

printf("enter your order quantity:");
scanf("%d",&orderquantity);


/* 
10dan az alınırsa indirim yok
10dan fazla kitap alırsa %30
30dan fazla alırsa %35
50den fazla alırsa %40 indirim*/ 

if (orderquantity>=50) {
    discountrate=40.0/100;
    
    discountprice= (bookprice*orderquantity)-(bookprice*orderquantity*discountrate);
    printf("this is your nodiscountprice: %d\n", orderquantity*bookprice);
    printf("this is your total discountprice: %.2f\n",bookprice*orderquantity*discountrate);
    printf("this is your sum price: %f",discountprice);
    
    }
    
    else if (orderquantity>=30) {
        discountrate=35.0/100;
        
        discountprice=(bookprice*orderquantity)-(bookprice*orderquantity*discountrate);
         printf("this is your nodiscountprice: %d\n", orderquantity*bookprice);
         printf("this is your total discountprice: %.2f\n",bookprice*orderquantity*discountrate);
         printf("this is your sum price: %.2f", discountprice);
        
    }
    
    else if(orderquantity>=10) {
        discountrate=30.0/100;
        
        discountprice=(bookprice*orderquantity)-(bookprice*orderquantity*discountrate);
         printf("this is your nodiscountprice: %d\n", orderquantity*bookprice);
         printf("this is your total discountprice: %.2f\n",bookprice*orderquantity*discountrate);
         printf("this is your sum price: %.2f", discountprice);
    }
    
    else {
    nodiscountprice=(bookprice*orderquantity);
    printf("this is your sum price: %d", nodiscountprice);
    }
    return 0;
    }
