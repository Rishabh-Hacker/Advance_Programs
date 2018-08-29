#include<stdio.h>
#include<string.h>
int main(){
 int a[20],l,i=0,j,k;
 char n[4];
 scanf("%s",n);
 l=strlen(n);
 for(i=0;i<l;i++)
 {
  if(n[i]=='I')
  a[i]=1;
  else if(n[i]=='V')
  a[i]=5;
  else if(n[i]=='X')
  a[i]=10;
  else
printf("\nEnter correct roman no.");
}
k=a[l-1];
for(i=l-1;i>0;i--)
{
  if(a[i]>a[i-1])
  k=k-a[i-1];
  else if(a[i]==a[i-1] || a[i]<a[i-1])
  k=k+a[i-1];
}
printf("Decimal Number is %d ",k);
}
