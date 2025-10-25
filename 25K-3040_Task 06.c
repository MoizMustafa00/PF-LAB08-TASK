#include<stdio.h>
int main()
{
	int mat[3][3] = {{8,7,9}, {6,5,4}, {2,3,1}};
	int i,j,k;
	int saddle_found = 0;
	int min_row = 0;
	int col_index = 0;
	
	printf("Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++)
	{
		min_row = mat[i][0];
		col_index = 0;
		for(j=0; j<3; j++)
		{
			if(mat[i][j] < min_row)
			{
				min_row = mat[i][j];
				col_index = j;
			}
		}
		int saddle = 1;
		for(k=0; k<3; k++)
		{
			if(mat[k][col_index] > min_row)
			{
				saddle = 0;
				break;
			}
		}
		if(saddle==1)
		{
			printf("\nSaddle Point Found at [%d,%d] = %d\n", i, col_index, min_row);
			saddle_found = 1;
		}
	}
	if(saddle_found==0)
	{
		printf("\nNo Saddle Point Found\n");
	}
	return 0;
}
