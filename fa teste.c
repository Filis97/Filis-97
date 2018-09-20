#include<stdio.h>
int main()
{
    int n,f,i;
    printf(" \n Entre com um  numero: \n");
    scanf("%d",&n);
    
    f=1;
    for(i=1;i<= n;i++)
    {
           f=f*i;
    }
    printf(" \n f(%d)=%d \n",n,f);
    system("pause");
    return 0;
    }
