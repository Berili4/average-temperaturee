#include <stdio.h>
#include <stdlib.h>

int toplam(int dizi[])
{
    float top=0;
    int i;
    for(i=0; i<7; i++)
    {
        top+=dizi[i];
    }
    return top;
}

int main()
{
    int i;
    int dizi[7];
    for(i=0; i<7; i++)
    {
        printf("%d. gunun sicakligini giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("haftanin sicaklik degerleri toplami:%d\n",toplam(dizi));
    float ort=toplam(dizi)/7.0;
    printf("haftanin sicaklik ortalamasi:%f\n",ort);
    int sayac=0;
    for(i=0;i<7;i++)
    {
        if(ort>dizi[i])
        sayac++;
    }
    printf("ortalamanin altýnda kalan sicaklik sayisi:%d",sayac);

    return 0;
}
