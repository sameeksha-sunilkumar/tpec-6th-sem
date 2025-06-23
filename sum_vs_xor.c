#include <stdio.h> 
int main(){ 
long long int n,m=1; 
scanf("%lld",&n); 
while(n>0){ 
if(n%2==0)m*=2; 
n/=2; 
} 
printf("%lld\n",m); 
return 0; }
