#include<stdio.h>
int main()
{
	int n,pos,num,i,arr[100];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The input array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("Enter the inserted element: ");
	scanf("%d",&num);
	printf("\n Enter the inserted position: ");
	scanf("%d",&pos);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=num;
	printf("The new array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


