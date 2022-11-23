//strcpy fonksiyonu

#include <stdio.h>

char* myStrcpy(char yazi1[], char yazi2[])
{
	int i = 0;
	
	while(yazi2[i] != '\0')  
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
 
    printf("%s \n", myStrcpy(yazi1, yazi2));
 
    return 0;
}
