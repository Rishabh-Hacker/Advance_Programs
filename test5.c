
#include<stdio.h>
int main(){
int n,i,j,c=0,f=0;
scanf("%d",&n);
int d[n],a[n];

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    d[i]=0;
}
for(i=1;i<n;i++)
{
            if((a[i-1]+a[i])%60==0)
                c+=1;

        }
        if(a[0]+a[n-1])
            c+=1;
printf("%d",c);
//for(i=0;i<c;i++)
//{
  //  printf("%d",&d[i]);
//}
return 0;
}
