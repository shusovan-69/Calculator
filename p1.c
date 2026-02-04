#include<stdio.h>
int main()
{
    int a[50],n,i,max;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    
    }
    for(i=1;i<n;i++)
    if(a[i]>max)
    max=a[i];
    printf("largest=%d",max);
    return 0;
    
}