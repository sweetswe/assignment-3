/* 2 Dimension array */
#include<stdio.h>
int main()
{
   int a[3][3];
   int i,j;
   for(i=0;i<=2;i++)
   {
   	for(j=0;j<=2;j++)
   	{
   		printf("Elements - [%d][%d]:  ",i,j); //Get the input data
   		scanf("%d",&a[i][j]);
	   }
   }
   printf("The Matrix is:\n");  
   for(i=0;i<=2;i++)
   {
   	 for(j=0;j<=2;j++)
   	 {
   	 printf("%d  ",a[i][j]);
   		if(j==2)          
		   {
		   	printf(" \n");   //matrix
         } 
	 }
   }
     return 0; 
}
