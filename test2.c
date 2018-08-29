//wap to covert a  value(x) which is in base(y) to base(z).
#include<stdio.h>
void main(){
char v[40],y[6],z[5],r[10];
char k[41];
printf("enter the value");
scanf("%s",v);
printf("enter the base of value");
scanf("%s",y);
printf("enter the base of base value");
scanf("%s",z);
int gb1,cb1;
gb1=atoi(gb1);
cb1=atoi(cb1);
long long s=0;int i;
int l=strlen(v);
 for(i=0;i<l;i++){//converts any string variable value into any base
 k=v[l-1-i];
 if(k>=48 && k<=57)
 k-=48;
 else if(k>=65 && k<=97)
 k-=57;
 else
 k-=87;
 s=s+*k*pow(gb1,i);
 }
 // 2 new way part of conversiom
/*while(s){
li=s%cb1;
 if(li>9)
 li+=55;
 p--;
 *p=li;
 s=s/cb1;
}*/
 //second part of conversion
 char *p=(char *)malloc(1000);
 p=p+999;
 *p='\0';
 while(s){
 *--p="0123456789abcdefghijklmnopqrstuvwxyz"[s%cb1];
 s=s/cb1;
 }
 printf("%s",p);
}
