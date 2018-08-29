#include<stdio.h>
union {
int a;
char b[4];
}p={501,'a','b','c','d'};
void main(){
printf("%d",p.b[0]);
}
