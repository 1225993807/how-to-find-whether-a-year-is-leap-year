#include<stdio.h>
int main()
{
	int i, j;
	int a, b;
	printf("请输入下界: ");
	scanf("%d", &a);
	printf("请输入上界: ");
	scanf("%d", &b);

	for (i = a; i <= b; i++)
	{
		if (i % 4 == 0)
		{
			if (i % 100 == 0)
			{
				if (i % 400 == 0)
				printf("%d年是闰年\n", i);
				else;
			}
			else printf("%d年是闰年\n", i);
		}

	}
	return 0;
}