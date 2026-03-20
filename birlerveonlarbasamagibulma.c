int main() {
   long long int sayı;
   int first,second;
   
   printf("enter your number\n:");
   scanf("%lld", &sayı);
   
   first= sayı%10;
   second= (sayı/10)%10;
   
   printf(" birler basamağı: %d", first);
   printf(" onlar basamağı: %d", second);
    return 0;
}
