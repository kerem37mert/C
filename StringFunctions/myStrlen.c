#include <stdio.h>

int myStrLen(char yazi[])
{
    int i = 0;
    while(yazi[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
	char isim[20];
	printf("isminizi giriniz \n");
	scanf("%s",&isim);
    printf("%d", myStrLen(isim));
    return 0;
}

