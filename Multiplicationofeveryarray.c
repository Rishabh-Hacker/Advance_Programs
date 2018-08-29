#include<stdio.h>
void multiply(int *a,int n,int j);
int main(){
int n,i,j;
scanf("%d",&n);
scanf("%d",&j);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
multiply(a,n,j);
}
void multiply(int *a,int n,int j){
int s[n];
int i;
if(j<=0)
return 0;
else{
for(i=0;i<n;i++)
s[i]=0;
s[0]=a[0]*a[1];
for(i=1;i<n;i++)
s[i]=a[i-1]*a[i+1];
s[n-1]=a[n-2]*a[n-1];
for(i=0;i<n;i++)
printf("%d ",s[i]);
printf("\n");
multiply(s,n,j-1);
}
}
