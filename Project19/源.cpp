#include<stdio.h>
int main()
{
	int i, j;
	int a, b;
	printf("�������½�: ");
	scanf("%d", &a);
	printf("�������Ͻ�: ");
	scanf("%d", &b);

	for (i = a; i <= b; i++)
	{
		if (i % 4 == 0)
		{
			if (i % 100 == 0)
			{
				if (i % 400 == 0)
				printf("%d��������\n", i);
				else;
			}
			else printf("%d��������\n", i);
		}

	}
	return 0;
}