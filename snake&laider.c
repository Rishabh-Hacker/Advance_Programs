#include<stdio.h>
void main(){
int a=1,b=1,c=1,i,k,j=0;
int l[40],s[40];
l[3]=22;
l[5]=8;
l[11]=26;
l[20]=29;
s[17]=4;
s[21]=9;
s[19]=7;
s[27]=1;
while(1){
        if(c==1){
            c=0;
        printf("Role the dice player A\n");
        scanf("%d",&i);
        a=i+a;
        //ladder
        if(a==3){
            a=l[3];
        }
        if(a==5){
            a=l[5];
        }
        if(a==11){
            a=l[11];
        }
        if(a==20){
            a=l[20];
        }
        //snake;
        if(a==17){
            a=s[17];
        }
        if(a==21){
            a=s[21];
        }
        if(a==19){
            a=s[19];
        }
        if(a==27){
            a=s[27];
        }
        if(a>=30){
        printf("PLayer A Wins \t%d",a);
        break;
        }}
        else{
        printf("Role the dice player B\n");
        scanf("%d",&k);
        b=k+b;
        //ladder
        if(b==3){
            b=l[3];
        }
        if(b==5){
            b=l[5];
        }
        if(b==11){
            b=l[11];
        }
        if(b==20){
            b=l[20];
        }
        //snake
        if(b==17){
            b=s[17];
        }
        if(b==21){
            b=s[21];
        }
        if(b==19){
            b=s[19];
        }
        if(b==27){
            b=s[27];
        }
        if(b>=30){
        printf("PLayer B Wins\t%d",b);
        break;
        }
        c=1;
        }
    }
}
