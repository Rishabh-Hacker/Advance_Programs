#include<stdio.h>
int main(){
int i,j,s=0,n;
scanf("%d",&n);
for(i=0;i<3*n;i++){
    for(j=0;j<3*n;j++){
        if(i==0||i==n*3-1||i+j==n*3-1)
        printf("#");
        else
        printf(" ");

    }
    printf("\n");
    }
}
