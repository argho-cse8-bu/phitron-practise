#include<stdio.h>
int calculate(int a[],int n,int x)
{
    int counter=0;
    for(int i=0;i<n; i++)
    {
        if(a[i]!=x ) counter++;
        else continue;
    }
    return counter;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int ans=calculate(a,n,x);
    printf("%d",ans);

}