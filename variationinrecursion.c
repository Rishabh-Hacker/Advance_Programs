//wap to solve plus minus problem using recursion
#include<stdio.h>
int recur(int *a,int t,int i,char *s){
if(i>=5)
     return (t==0);
if(t==0)
return 1;
return recur(a,t-a[i],i+1,s)&&(s[i]='+')||recur(a,t+a[i],i+1,s)&&(s[i]='-')||recur(a,t,i+1,s)&&(s[i]=' ');
//return recur(a,t-a[i],i+1,s)&&(s[i]='+')||recur(a,t+a[i],i+1,s)&&(s[i]='-');

}
int main(){

int a[5]={1,2,4,5,6};
char s[10]="";
int i=0;
printf("%d\n",recur(a,7,0,s));
for(i=0;i<5;i++){

    //if(s[i]=='+')
    //if(s[i]=='+'||s[i]=='-')
    if(s[i]!=' ')
    printf("%c%d",s[i],a[i]);
}
printf("=%d",7);
return 0;}

