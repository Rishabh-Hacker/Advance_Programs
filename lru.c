#include<stdio.h>
int main(){
int a[10],b[20],n,m,i,j,p,k,f,hit=0,miss=0;
scanf("%d\n",&n);
a[n];
scanf("%d\n",&m);
b[m];
for(i=0;i<m;i++)
    scanf("%d",&b[i]);
for(i=0;i<m;i++){
    k=b[i];
    f=0;
    for(j=0;j<n;j++){
        if(a[j]==k){
        f=j;
        hit++;
        }
    }
    for(p=f;p<n;p++){
    a[p]=a[p+1];
    }
    miss=m-hit;
    }
  printf("hits are %d\n",hit);
  printf("miss are %d\n",miss);
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
