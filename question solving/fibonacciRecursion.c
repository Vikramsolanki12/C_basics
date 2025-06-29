#include<stdio.h>
int fibo(int n){
    if(n==1||n==2) return 1;
  int y=fibo(n-1)+fibo(n-2);
  return y;
}
int fiboprint(int n){
    for(int i=0;i<=n;i++){
        printf("%d",fibo(i));
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    printf("fibonacci series:");
    fiboprint(n);

    return 0;
}