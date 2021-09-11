/*  Addition of two matrix */
#include<stdio.h>
int main()
{
	int first[50][50],second[50][50],add[50][50],size,i,j;
	printf("Enter the size of the square matrix:");
	scanf("%d",&size);
	printf("Input elements in the first matrix: \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("Element-[%d][%d]: ",i,j);
			scanf("%d",&first[i][j]);
		}
	}
	printf("Input elements in the second matrix: \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("Element-[%d][%d]: ",i,j);
			scanf("%d",&second[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			add[i][j]=first[i][j]+second[i][j];
			
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
	printf("Addition of two matrix is \n");
	for(i=0;i<size;i++)
	for(j=0;j<size;j++)
	{
			printf("%d  ",add[i][j]);
		
	if(j==1)
	{
		printf("\n");
	}
	}

       }
    }

return 0;	
}
