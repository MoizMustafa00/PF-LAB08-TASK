#include<stdio.h>
int main()
{
	int start=0, end=0, prime=0;
	printf("Enter the Starting Value of the Range: ");
	scanf("%d", &start);
	printf("Enter the Ending Value of the Range: ");
	scanf("%d", &end);
	
	printf("Prime Numbers Between %d & %d are:\n", start, end);
	int i, j;
	for(i=start; i<=end; i++)
	{
		if(i<2)
		{
			continue;	
		}
		prime=1;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1)
		{
			printf("%d\n", i);
		}
	}
	printf("\n");
	return 0;
}
