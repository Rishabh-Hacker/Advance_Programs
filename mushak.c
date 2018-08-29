#include<stdio.h>
int main(){
int a[5][5],b[6][6],i,j,t=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            b[0][i]=999999;
            b[j][0]=999999;
        }
    }
b[1][1]=a[0][0];
    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
          if(i==1 &&j==1)
                    continue;
            b[i][j]=min(b[i-1][j-1],b[i-1][j],b[i][j-1])+a[i-1][j-1];
            if(b[i][j]=="99"){
                t=1;
                break;
            }
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d\t",b[i][j]);
            }
        printf("\n");
    }
}
int min(int a,int b,int c){
if(a<b && a<c)
return a;
else if(b<a && b<c)
return b;
else
return c;
}
