#include<stdio.h>
void Hollow(int n)
{
	for (int z = 1; z <= n; z++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= n - 2; x++)
	{
		printf("*");
		for (int y = 1; y <= n - 2; y++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	int a = 1;
	while (a <= n)
	{
		printf("*");
		a++;
	}
}
int main()
{
	int x;
	printf("Enter the number : ");
	scanf_s("%d", &x);
	Hollow(x);

	return 0;
}