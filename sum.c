#include<stdio.h>
int main()
{
    int f1=0,f2=1,f3,i,n;
    printf("enter the n value\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
     {

     if(n<=i)

        f3=i;
    else
    {



        f3=f1+f2;
        f1=f2;
        f2=f3;

     }
     }
    printf("fibonacci series are %d\n",f3);
  return 0;
}
