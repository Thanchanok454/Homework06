#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	for (int a = 1; a <= num; a++)
	{
		for (int b = 1; b <= num; b++)
		{
			if (a == 1 || a == num || b == 1 || b == num)
			{
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}