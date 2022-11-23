#include <stdio.h>
int myStrLen(char yazi[], int uzunluk)
{
    int i = 0;
    while (yazi[i] != '\0')
    {
        i++;
    }

    if (i > uzunluk)
    {
        return uzunluk;
    }
    else
    {
        return i;
    }
}

int main()
{
    char isim[20];
    printf("isminizi giriniz \n");
    scanf("%s", &isim);
    printf("%d", myStrLen(isim, 5));

    return 0;
}
