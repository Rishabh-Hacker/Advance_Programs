//Do this again with your concept after seeing test 4,6,8;
#include <stdio.h>
int main()
{
    int i,j,n,p=0,f=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {k=p*n+1;

        for(j=0;j<n;j++)
        {
             printf("%d\t",k);
        k++;
        }
        printf("\n");
        if(i+1==n/2)
            {f=1;
            //p+=3;
            p++;
            continue;
}
if(f==0)
    p+=2;
else
    p-=2;
}
}
