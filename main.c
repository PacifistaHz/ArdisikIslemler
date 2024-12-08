#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int sayi,i,Toplam=0, Fark=0, Carpim=1;
    float Bolum=1000.0;
    printf("Enter a number:");
    scanf("%d",&sayi);
    Toplam += sayi;
    Fark -= sayi;
    Carpim *= sayi;
    Bolum /= sayi;
    printf("Toplam = %d\n",Toplam);
    printf("Fark = %d\n",Fark);
    printf("Carpim = %d\n",Carpim);
    printf("Bolum = %.2f\n",Bolum);
    return 0;
}
