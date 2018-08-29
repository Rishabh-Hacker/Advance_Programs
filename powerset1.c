#include<stdio.h>
int main(){
int i,j;
char s[3]={'a','b','b','a'};
for(i=0;i<1<<4;i++){
for(j=0;j<4;j++){
if(i&1<<j){
printf("%c",s[j]);
}
}printf("\n");
}}
