/*Sort the elements of array in decending order */
#include<stdio.h>
int main()
{
	int size,arr[50],i,j,temp;
	printf("Input the size of array: ",size); //Enter the size of array.
	scanf("%d",&size);
	printf("Input %d elements in the array:\n",size);
	for(i=0;i<size;i++){
		printf("Element-[%d]:",i);    //Get the input data.
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nElements of the array in sorted decending order:\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d  ",arr[i]);           //output of decending order.
	}
	               
return 0;	
}
