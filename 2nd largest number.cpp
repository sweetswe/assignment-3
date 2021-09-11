/* Second largest Number */
#include<stdio.h>
int main()
{
	int arr[50];
	int large=0,second=0,size,i,j=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Input %d elements in the array:\n",size);
	for(i=0;i<size;i++)
	{
		printf("Element-[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
			j=i;
		}
	}
for(i=0;i<size;i++)
{
	if(i==j)
	{
		i++;
		i--;
	}
	else{
		if(second<arr[i])
		{
			second=arr[i];
		}
	}
}	
printf("The second largest element in the array is: \n %d",second);
return 0;	
}
