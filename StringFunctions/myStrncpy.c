#include <stdio.h>

char* myStrncpy(char yazi1[], char yazi2[], int n)
{
	int i = 0;
	
	while(i < n)  
	{
		yazi1[i] = yazi2[i];
		i++;	
	}  
	yazi1[i]= '\0'; 
	
	return yazi1;
}

int main()
{
    char yazi1[50];
    char yazi2[] = "yazi 2";
    int n = 2;
 
    printf("%s \n", myStrncpy(yazi1, yazi2, n));
 
    return 0;
}
