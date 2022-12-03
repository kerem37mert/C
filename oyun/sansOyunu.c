#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zarAtis();
void oyun();

int main()
{
    int basla = 0;

    while(1)
    {
        if(basla == 1)
        {
            oyun();
            break;
        }
        else
        {
            printf("Oyuna baslamak icin \"1\" tiklayiniz\n");
            scanf("%d",&basla);
        }
    }

    return 0;
}

int  zarAtis()
{
    int sayi1, sayi2;
    int toplam;

    srand(time(NULL));
    sayi1 = rand() % 6 + 1;
    sayi2 = rand() % 6 + 1;

    toplam = sayi1 + sayi2;

    return toplam;
}

void oyun()
{
    int durum;

    do
    {
        int toplam = zarAtis();
        printf("Zarlar atiliyor\n");

        if(toplam == 11 || toplam == 7)
        {
            printf("Tebrikler! Kazandiniz.\nPuaniniz: %d\n", toplam);
        }
        else if(toplam == 2 || toplam == 3 || toplam == 12)
        {
            printf("Maalesef Kaybettiniz.\nPuaniniz: %d\n", toplam);
        }
        else
        {
            printf("Puaniniz: %d\n", toplam);
        }

        printf("Tekrar oynamak icin \"1\" -- cikis icin herhangi bir tusa tiklayiniz \n");
        scanf("%d",&durum);


    }while(durum == 1);
}
