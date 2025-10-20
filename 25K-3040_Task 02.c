#include<stdio.h>
int main()
{
	int n=0;
	printf("Enter the number of the multiplication table: ");
	scanf("%d", &n);
	int i=0;
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n", n, i, n*i);
	}
	return 0;
}
