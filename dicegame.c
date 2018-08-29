#include<stdio.h>
void main(){
    int n,i=0,j,sa=1,sb=1,d1,d2;
    printf("Enter the size of square matrix\n");
    scanf("%d",&n);
        while(1){
                printf("Player A rolls the dices from 1--6\n");
                scanf("%d%d",&d1,&d2);
                d1=d1+d2;
                if(d1%2==0){
                sa+=d1%n*n+d1/n;
                printf("dice value%d\n",sa);
                }
                else{
                sa+=d1;
                }
                if(sa>=n*n){
                    printf("Player A wins");
                    break;
                }
                printf("Player B rolls the dices from 1--6\n");
                scanf("%d%d",&d1,&d2);
                d1=d1+d2;
                if(d1%2==0){
                sb+=d1%n*n+d1/n;
                printf("dice value%d\n",sb);
                }
                else{
                sb+=d1;
                }
                if(sb>=n*n){
                    printf("Player B wins");
                    break;
                }
        }

}
