// strcat fonksiyonu
//git deneme
#include <stdio.h>

char* myStrcat(char yazi1[], char yazi2[])
{
	static char sonuc[100];
	int i = 0, j = 0;

	while (yazi1[i] != '\0')
	{
		sonuc[i] = yazi1[i];
		i++;
	}

	while (yazi2[j] != '\0')
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

	printf("isiminizi giriniz \n");
	scanf("%s", &isim);
	printf("soysiminizi giriniz \n");
	scanf("%s", &soyisim);
	char* sonuc = myStrcat(isim, soyisim);
	printf("%s", sonuc);

	return 0;
}
