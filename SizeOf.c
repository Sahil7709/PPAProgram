#include<stdio.h>

int main()
{
    char ch='A';
    int i=11;
    float f=90.98;
    double d=90.78645;

    int Arr[5];
    double Brr[5];
    float Crr[5];
    char Drr[5];

    printf("%lu\n", sizeof(ch));
    printf("%lu\n", sizeof(i));
    printf("%lu\n", sizeof(f));
    printf("%lu\n", sizeof(d));

    printf("%lu\n", sizeof(Arr));
    printf("%lu\n", sizeof(Brr));
    printf("%lu\n", sizeof(Crr));    
    printf("%lu\n", sizeof(Drr));

    return 0;
}