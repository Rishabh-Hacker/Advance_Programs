#include<stdio.h>

int main(int *c,int d){
int *a,*b,i,j,h;
a=(int *)malloc(sizeof(int *)(h+2));
b=(int *)malloc(sizeof(int *)(h+2));
for(i=1;i<h+1;i++){
scanf("%d",a[i]);
}
for(j=1;j<=d;j++){
for(i=1;i<=h+1;i++)
{
b[i]=a[i-1]^a[i+1];
}
for(i=1;i<=h+1;i++)
{
a[i]=b[i];
}
}
    for(i=1;i<=8;i++)
    printf("%d\t",a[i]);
}
