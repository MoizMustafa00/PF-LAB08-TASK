#include<stdio.h>
int main()
{
	int arr[2][2];
	int i,j;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("arr[%d][%d]: ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nBefore Transpose:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nAfter Transpose:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
