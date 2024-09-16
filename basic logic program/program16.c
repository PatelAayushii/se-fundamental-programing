//16.Convert country’s name in abbreviate form

#include<stdio.h>
#include<string.h>
int main()
{
	char couname[100],abr[100];
	int i,j=0;
	printf("\nEnter the countary name = ");
	gets(couname);

	printf("\nOriginal countary name = %s",couname);

	for(i=0;couname[i]!='\0';i++)
	{
		if((i==0 || couname[i-1]==' ') && couname[i]!=' ')
		{
			abr[j] = couname[i];
			j++;
		}
	}
	strupr(abr);
	printf("\nAbbriviated form = %s",abr);
	return 0;
}