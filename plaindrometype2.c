#include<stdio.h>
#include<stdlib.h>//math function header file
void palindrome(int);//function declaration
void suffle(int a[],int,int);//function declaration
int main(){//main function
    int n;
    printf("Enter the number to check plaindrome or not\n");
    scanf("%d",&n);
    palindrome(n);//palin function call
}
void palindrome(int n){//palindrome function
    int h,x,s=0,l,i=0;
    l = floor(log10(abs(n))) + 1;
    int a[l];
    h=n;
    while(n!=0){
        x=n%10;
        a[i]=x;
        s=(s*10)+x;
        n=n/10;
        i++;
    }
    if(s==h)
    printf("Number %d is palindrome\t",h);
    else{
    suffle(a,l,h);
    }
}
void suffle(int a[],int l,int n){//to check suffled no. is palindrome or not
    int c=0,i,h,x=0;
    for(i=0;i<l;i++){
        if(a[i]==a[i+1]){
            c+=2;
        }
    }
    printf("%d",c);
    if(c==l-1)
        printf("Shuffle the given no and it is palindrome %d",n);
    else
        printf("Number %d is not palindrome\t",h);
}
