#include<stdio.h>
int main(){
int i,j;
//char s[3]={'a','b','c'};//as per ques it is int
int s[13]={1,2,3,4,5,6,7,8,12,21,5,4,6},k=14,l;
char s1[14]="";
for(i=0;i<1<<14;i++){
    l=0;
for(j=0;j<14;j++){
if(i&1<<j){
l=l+s[j];
s[j]='+';
}else{
l=l-s[j];
s[j]='-';
}}
if(l==k){
printf("yes\n");
printf("%s",s1);
break;
}
}}
