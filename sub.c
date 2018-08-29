#include<stdio.h>
void main(){
int a[20][10],b,c[5],n,i,k=0,s[10][2],t=0,j;
printf("Enter the total no of students should be less than 20");
scanf("%d",&n);
printf("Enter the subjects");
scanf("%d",&b);
a[n][b];
s[n];
printf("Enter the credits for the subjects");
for(i=0;i<b;i++){
scanf("%d",&c[i]);
}
printf("enter the students marks");
for(i=0;i<n;i++)
{for(j=0;j<b;j++){
    scanf("%d",&a[i][j]);
    k=k+a[i][j]*c[j];
    }s[i][1]=k;
    s[i][0]=i+1;
    k=0;
}
for(i=0;i<n;i++){
for(k=0;k<n-i;k++){
if(s[k][1]<s[k+1][1]){
t=s[k][1];
s[k][1]=s[k+1][1];
s[k+1][1]=t;
}
}
}
for(i=0;i<3;i++)
printf("%d",s[i][0]);
}
