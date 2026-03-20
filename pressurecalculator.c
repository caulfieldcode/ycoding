#include <stdio.h>

int main()
{
    float V, n, T, total;
    const float R = 0.08206;

    printf("enter your Volume:\n");
    scanf("%f", &V);

    printf("enter your mole:\n");
    scanf("%f", &n);

    printf(" enter your Tempature:\n");
    scanf("%f", &T);

    //P= n.R.T/V
    total = ((n * (T + 273.15) * R) / V);

    printf("this is your P: %f", total);

    return 0;
}
