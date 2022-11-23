//strcmp fonksiyonu

#include <stdio.h>

int ij(int i, int j)
{
	if (i > j)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int myStrcmp(char yazi1[], char yazi2[])
{
	int i = 0, j = 0;

	while (yazi1[i] != '\0')
	{
		i++;
	}

	while (yazi2[j] != '\0')
	{
		j++;
	}

	if (i != j)
	{
		return ij(i, j);
	}
	else
	{
		int toplam, k = 0;

		while (yazi1[k] != '\0')
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
	printf("isminizi giriniz \n");
	scanf("%s", &isim1);
	printf("isminizi giriniz \n");
	scanf("%s", &isim2);
	printf("%d", myStrcmp(isim1, isim2));

	return 0;
}
