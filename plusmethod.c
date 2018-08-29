#include<stdio.h>
int main(){
int i,j;
//char s[3]={'a','b','c'};//as per ques it is int
int s[13]={1,2,3,4,5,6,7,8,9,10,10,10,10},k=14,l;
char s1[14]="";
for(i=0;i<1<<13;i++){
    l=0;
    strcpy(s1,"             ");
for(j=0;j<13;j++){
//if(l==k)
  //  break;
if(i&1<<j){
l=l+s[j];
s1[j]='1';
}else{
s1[j]='0';
}}
if(l==k){
printf("yes\n");
printf("%s\n",s1);
}
}}
