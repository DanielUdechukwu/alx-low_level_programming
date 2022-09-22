#include "main.h"



int _strcmp(char *s1,char *s2)
{
	int i=0, n = 15;

	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] > s2[i])
		{
			/*flag = 1;*/
			return (n);
			break;
		}
		else if (s1[i] < s2[i])
		{
			return (-n);
		}
		else
		{
			return 0;
		}
		i++;
	}

	/*if(flag==0)
	return 0;
	else
	return 1;*/
return 0;
}
