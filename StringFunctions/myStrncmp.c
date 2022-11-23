//strncmp fonksiyonu

#include <stdio.h>

int ij(int i, int j)
{
	if(i > j)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int myStrncmp(char yazi1[], char yazi2[], int uzunluk)
{
	int i = uzunluk, j = uzunluk;
	
	if (i != j)
	{
		return ij(i, j);
	}
	else
	{
		int toplam, k = 0;

		while (k < uzunluk)
		{
			if (yazi1[k] == yazi2[k])
			{
				toplam++;
			}
			k++;
		}

		if (toplam == i && toplam == j)
		{
			return 0;
		}
		else
		{
			return ij(i, j);
		}
	}
}

int main()
{
	char isim1[20], isim2[20];
	int uzunluk;
	printf("isminizi giriniz \n");
	scanf("%s",&isim1);
	printf("isminizi giriniz \n");
	scanf("%s",&isim2);
	printf("Uzunluk giriniz \n");
	scanf("%d",&uzunluk);
    printf("%d", myStrncmp(isim1,isim2,uzunluk));
    return 0;
}
