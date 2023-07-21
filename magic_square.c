#include<stdio.h>
int main()
{
    int n,i,j,num=1;
    printf("Enter the size of magic square: ");
    scanf("%d", &n);
    int magic[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            magic[i][j]=0;
        }
    }
    i=0;
    j=(n-1)/2;
    magic[i][j]=num++;
    while(num<=n*n)
    {
        i--;
        j++;
        if(i==-1&&j!=n)
            i=n-1;
        else if(j==n&&i!=-1)
            j=0;
        else if(i==-1&&j==n)
        {
            i=0;
            j=n-2;
        }
        magic[i][j]=num++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",magic[i][j]);
        }
        printf("\n");
    }
    return 0;
}
