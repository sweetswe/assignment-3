/*Sort the elements of array in ascending order */
#include<stdio.h>
int main()
{
	int size,a[50],i,j,temp;
	printf("Input the size of array: ",size); //Enter the size of array.
	scanf("%d",&size);
	printf("Input %d elements in the array:\n",size);
	for(i=0;i<size;i++){
		printf("Element-[%d]:",i);    //Get the input data.
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nElements of the array in sorted ascending order:\n");
	for(i=0;i<size;i++)
	{
		printf("%d  ",a[i]);           //output of acending order.
	}
	               
return 0;	
}
