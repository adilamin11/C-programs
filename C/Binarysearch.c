#include <stdio.h>
	int bsearch (int a[], int key, int lb, int ub)
{
	int mid;
		while(ub>=lb)
		{
			mid = (lb+ub)/2;
			if(key<a[mid])
				{ub=mid-1;}
			else if(key> a[mid])
				{lb=mid+1;}
			else if(key==a[mid])
				{return (mid);}
			return (bsearch (a,key,lb,ub));
				
		}
		return -1;
}

int main(void)
{
	int a[]={3,2,4,7,2,8,1},key;
	int n = 6;
	printf("Enter key: ");
	scanf("%d",&key);
	int result = bsearch(a,key,0,n);
	if(result == -1)
		printf("not found");
	else
		printf("Element found at index %d", result);
	return 0;
}
