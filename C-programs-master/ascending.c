#include<stdio.h>
int main()
{
	int i,n;
	int a[100];
	void ascend(int a[] , int n);
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	for(i=0 ; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	
	ascend(a , n);
	
	return 0;
}

void ascend(int a[] , int n)
{
	int i,j,temp;
	for(i = 0 ; i < n-1 ; i++)
	{
		for(j = 0 ; j < n-1 ; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]  =temp;
			}
		}
	}
	
	printf("The sorted array is:\n");
	
	for(i = 0 ; i < n ; i++)
	{
		printf("%d\t", a[i]);
	}
	
}
