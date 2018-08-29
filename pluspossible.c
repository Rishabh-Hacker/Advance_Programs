#include<stdio.h>
int main(){
int i,j;
//char s[3]={'a','b','c'};//as per ques it is int
int s[13]={1,2,3,4,5,6,7,8,9,10,10,10,10},k=14,l,m;
int s1[14]={0,0,0,0,0,0,0,0,0,0,0,0,0};
int s2[14]={0,0,0,0,0,0,0,0,0,0,0,0,0};
for(i=0;i<1<<13;i++){
    l=0;

for(m=0;m<13;m++){
s2[m]=s1[m];
}
int s1[14]={0,0,0,0,0,0,0,0,0,0,0,0,0};
for(j=0;j<13;j++){
if(l==k)
    break;
if(i&1<<j){
l=l+s[j];
s1[j]=s[j];
}else{
s1[j]=0;
}}
if(l==k){
    int c[8]={0,0,0,0,0,0,0,0},d[8]={0,0,0,0,0,0,0,0};
    int w=0,q=0;
for(m=0;m<13;m++){
if(s2[m]!=0){
c[q]=s2[m];
q++;}
if(s1[m]!=0){
d[w]=s1[m];
w++;

}}
int f=1;
for(m=0;m<8;m++){
if(c[m]!=d[m])
f=0;
}if(f==0){
printf("yes");
for(m=0;m<13;m++)
printf("%d",s1[m]);
printf("\n");
}}
}
}
