#include<stdio.h>
int maze(int **a,int x,int y,int m,int n){
	if(x>=0 && x<m && y>=0 && y<n)
	{
        if(a[x][y]=9)
        return 1;

	if(a[x][y]==1){
		if(maze(a,x+1,y,m,n)==1)
		return 1;
		if(maze(a,x,y+1,m,n)==1)
		return 1;

		return 0;
	}
	return 0;
	}
	return 0;
}
int main(){
	int i,j;
	int a[3][3];
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
		}
		maze(a,0,0,3,3);
	return 0;

}
