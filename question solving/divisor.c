#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter a number:");
    scanf("%d",&n);
  printf("divisors are:");
  for(i=1;i<=n;i++){
    if(n%i==0){
        
        printf("%d, ",i);
        count++;
    }
  }

  printf("number of divisor is %d",count);
 







    return 0;
}