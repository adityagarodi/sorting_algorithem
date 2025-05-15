#include<stdio.h>

int main()
{
	int n,i,k,j,temp;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Array elements are:\n");
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	k=n;
	for(j=0; j<n; j++) {
		for(i=0; i<k; i++) {
			if(a[i]>a[i+1]) {
				temp = a[i+1];
				a[i+1] = a[i];
				a[i] = temp;
			}
		}
		k--;
	}
	
	printf("Sorted array :\n");
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
}
