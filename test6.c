#include <stdio.h>
int main()
{
    int i,j,k=0;
    char ch;
    //scanf("%[^\n]s",p);
char a[10][10]={"#"};
while(ch=(getchar())!='\n'){
if(ch==' '){
a[j][i]='\0';
j=0;
i++;
continue;
}
a[j][i]=ch;
j++;
k++;
}
for(i=0;i<k;i++){
for(j=0;j<k;j++){
if(a[i][j]>=65&&a[i][j]<=122)
printf("%c",a[i][j]);
}
}
}

