#include <stdio.h>
int main() {
// basit çarpım tablosu

int n=0;
int sayı=1;

do {
    printf("please enter number(1-10):");
    scanf("%d", &n);
}
while (!(1<=n && n<=10)); //while(1) = başa dön
                          //while(0) = döngüden çık,girme (ex. while(11<10)== 0 döner ve döngüye girmez)
while(sayı<=10) {
    printf("%d*%d=%d \n",n,sayı,n*sayı);
    sayı++;
}

return 0;
}
