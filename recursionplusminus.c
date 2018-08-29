//wap to solve plus minus problem using recursion
#include<stdio.h>
int recur(int *a,int t,int i,char *s,int j){
if(i>=5)
     return (t==0);
return recur(a,t-a[i],i+1,s,j+1)&&(s[i]='+')||recur(a,t+a[i],i+1,s,j+1)&&(s[i]='-');
}
int main(){

int a[7]={1,2,4,5,6,7,8};
char s[15]="";
int i=0;
printf("%d\n",recur(a,8,0,s,0));
for(i=0;i<5;i++){
printf("%c%d",s[i],a[i]);
}
printf("=%d",8);
return 0;}

