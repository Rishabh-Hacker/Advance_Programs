//problem to solove sudoko
//functions

#include<stdio.h>
int unassigned(int **a,int *r,int *c){
    for(*r=0;*r<9;*r++){
    for(*c=0;*c<9;*c++){
        if(a[*r][*c]==0)
            return 1;
        else
            return 0;
        }
    }
}
int rowcheck(int **a,int *r,int n){
    int c;
for(c=0;c<n;c++){
if(a[*r][c]==n)
return 1;
else
return 0;
}
}
int coloumncheck(int **a,int *c,int n){
int r;
for(r=0;r<9;r++){
   if(a[r][*c]==n)
    {return 1;
     }else{
return 0;
}
}}
int boxcheck(int **a,int start,int end,int n){
int r,c;
for(r=0+start;r<3+start;r++){
for(c=end;c<3+end;c++){
if(a[r][c]==n){
return 1;
}
else
{
    return 0;
}
}}
}
int issafe(int **a,int r,int c,int n){
return(!(rowcheck(a,r,n))&&!(coloumncheck(a,c,n))&&!(boxcheck(a,r-r%3,c-c%3,n)));
}
int solvesudoko(int **a){
int r,c;
if(!unassigned(a,r,c))
return 1;
int i;
for(i=0;i<9;i++){
if(issafe(a,r,c,i)){
a[r][c]=9;
if(solovesudoko(a))
return 1;
a[r][c]=0;
}
}
return 0;
}
void printGrid(int **a)
{int row,col;
    for ( row = 0; row < 9; row++)
    {
       for (col = 0; col < 9; col++)
             printf("%2d", a[row][col]);
        printf("\n");
    }
}
void main(){
int a[9][9] =        {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
 if (SolveSudoku(a) == 1)
          printGrid(a);
    else
         printf("No solution exists");

    return 0;
}

