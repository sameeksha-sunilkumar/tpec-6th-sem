#include<stdio.h>
int main()
{
    int t,c,l,i,j,arr[20000];
    scanf("%d",&t);
    for( ; t>0 ; t--){
        scanf("%d%d",&c,&l);
        for(i=0;i<l;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<l-1;i++){
            for(j=i+1;j<l;j++){
                if(arr[i]+arr[j]==c){
                    printf("%d %d\n",i+1,j+1);
                }
            }
        }
    }
    return 0;
}
