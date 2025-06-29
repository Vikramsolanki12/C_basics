#include<stdio.h>
int fact(int n){
    if(n==1||n==0) return 1;
    int x=n*fact(n-1);
    return x;
}
int sumFact(int x){
    int f=1,sum=0;
    for(int i=1;i<=x;i++){
        f=f*i;
        sum +=f;
    }
    return sum;
}

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    printf("factorial of n is %d.",sumFact(n));




    return 0;
}
