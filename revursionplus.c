//wap to solve plus minus problem using recursion giving no. of possiblity
#include<stdio.h>
int recur(int *a,int t,int i,char *s){
if(i>=5)
    {
     int i1;
     if(t==0){
     for(i1=0;i1<5;i1++){
     printf("%c%d",s[i1],a[i1]);
}
printf("=%d\n",6);
     }
return 0;
}else{
s[i]='+';
(recur(a,t-a[i],i+1,s));
s[i]='-';
(recur(a,t+a[i],i+1,s));
}
//if(t==0)
//return 1;
//return recur(a,t-a[i],i+1,s)&&(s[i]='+')||recur(a,t+a[i],i+1,s)&&(s[i]='-');
}
int main(){

int a[5]={1,2,4,5,6};
char s[10]="";
int i=0;
(recur(a,6,0,s));
//for(i=0;i<5;i++){
  //  if(s[i]=='+'||s[i]=='-')
   // printf("%c%d",s[i],a[i]);
//}
//printf("=%d",6);
return 0;}

