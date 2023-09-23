// Anything apart from zero is considered as 1
#include<stdio.h>
int main()
{
    int a[100],n,i,count=0;
    printf("enter number of inputs for array \n");
    scanf("%d",&n);
    printf("enter %d numbers (o's & 1's only and press enter after each element)\n ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            count++;
    }
    for(i=0;i<count;i++)
    {
        a[i]=0;
    }
    for(i=i;i<n;i++)
    {
        a[i]=1;
    }
    printf("after setting all 0's to left and 1's to right \n");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}