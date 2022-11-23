#include <stdio.h>

char* myStrncat(char yazi1[], char yazi2[], int uzunluk)
{
	static char sonuc[100];
	int i = 0, j = 0;

	while (yazi1[i] != '\0')
	{
		sonuc[i] = yazi1[i];
		i++;
	}

	while (j < uzunluk)
	{
		sonuc[i] = yazi2[j];
		j++;
		i++;
	}

	return sonuc;
}

int main()
{
	char isim[20];
	char soyisim[20];
	int uzunluk;

	printf("isiminizi giriniz \n");
	scanf("%s", &isim);
	printf("soysiminizi giriniz \n");
	scanf("%s", &soyisim);
	printf("Uzunluk giriniz \n");
	scanf("%d", &uzunluk);
	char* sonuc = myStrncat(isim, soyisim, uzunluk);
	printf("%s", sonuc);

	return 0;
}