#include<stdio.h>
int lookup[100];
int fib(int n){
    static int p=1;
if(lookup[n]==0)
{
    if(n<=1)
    lookup[n]=n;
    else{
        p++;
    lookup[n]=fib(n-1)+fib(n-2);
    }
}
return p;
}
int main(){
int n=10;
printf("%d",fib(n));
}
