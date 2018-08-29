void connectedCities(int n, int g, int originCities_count, int* originCities, int destinationCities_count, int* destinationCities, int* result_count) {
    int i,j,l,m=0;
    int a[4];
    for(i=0;i<originCities_count;i++){
        if(originCities[i]>g){
            for(j=0;j<destinationCities_count;j++){
                if(destinationCities[j]%originCities[i]==0|| originCities[i]%destinationCities[j]==0){
                    a[m]=1;
                    m++;
                    break;
                }
            }

        }
        a[m]=0;
        m++;
    }
for(i=0;i<4;i++)
printf("%d",a[i]);
}
int main(){
int a[4]={1,4,3,6};
int b[4]={3,6,2,5};
int *k;int i;
connectedCities(6,0,4,a,4,b,4);
}

