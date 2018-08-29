#include<math.h>
#include<stdio.h>
int main(){
    int  n,k=0;
    int a[20];
    int z;
    int i,j;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            a[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++){
        z=square(a[i]);
         if(z!=0){
            a[i]=0;
    }
    int c=0;
    for(i=0;i<k;i++){
            if(a[i]!=0)
            {
                printf("%d",a[i]);
                c++;
            }

}
printf("%d",c);
}
int square(int n){
    int b[]={2,3,7,8};
    int s=n%10;
    int i;
    for(i=0;i<4;i++){
        if(b[i]==s)
            return 0;
    }

}
