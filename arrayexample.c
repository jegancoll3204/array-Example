#include<stdio.h>
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter %d St",i+1);
        scanf("%d",&a[i]);
    }

    printf("Answer is :");
    for(i=0;i<10;i++)
    {
    
        printf("%5d",a[i]);
    }
}