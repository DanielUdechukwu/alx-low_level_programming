#include <stdio.h>

int main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "Hello";

	int res1 = 1, res2 = 0;

	if (s1 != s2)
		printf("%d\n", res1);
	else
		printf("%d\n",res2);

}
