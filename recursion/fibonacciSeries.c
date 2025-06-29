#include<stdio.h>
int fibo(int x){
    if(x==1||x==2)
     return 1;
    int y=fibo(x-1)+fibo(x-2);

    return y;
}

int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int m=fibo(n);
 printf("%d",m);
return 0;
}
