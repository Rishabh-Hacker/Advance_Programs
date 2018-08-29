#include<stdio.h>
#include<stdlib.h>
int main(int *c,int d){
int *a,*b,i,j,h;
a=(int *)malloc(sizeof(int));
b=(int *)malloc(sizeof(int));
for(i=0;i<h;i++){
scanf("%d",a[i]);
}
for(j=1;j<=d;j++){
for(i=0;i<=h;i++){
if(a[(i-1)/8]>a[(i+1)/8])
b[(i-1)/8]=a[i]*.1;
else if(a[(i-1)/8]<a[(i+1)/8])
b[(i+1)/8]=a[i]*.1;
else
b[(i+1)/8]=a[i]*.1;
}for(i=0;i<=h;i++)
a[i]=a[i]*.9+b[i];
}
    for(i=1;i<=8;i++)
    printf("%d\t",a[i]);
}
