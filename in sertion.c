#include<stdio.h>
int main()
{
   int i,j,temp,k,n,m;
   printf("Enter the size of the array: ");
   scanf("%d",&n);
   int a[n];
   printf("Enter the array elements: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<n;i++)
   {
       temp=a[i];
       for(j=i-1;j>=0;j--)
       {
           if(a[j] <= temp)
               break;
           a[j+1] = a[j];
       }
       a[j+1] = temp;
       printf("Pass %d: ", i);
       for(m=0;m<n;m++)
       {
           printf("%d ", a[m]);
       }
       printf("\n");
   }
   printf("Array after sorting is: ");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   return 0;
}
