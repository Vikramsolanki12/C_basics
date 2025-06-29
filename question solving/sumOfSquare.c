#include<stdio.h>
int sumSquare(int x){
    int f=1,sum=0;
    for(int i=1;i<=x;i++){
        f=f+i;
        sum +=f;
    }
    return sum;
}

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    printf("factorial of n is %d.",sumSquare(n));




    return 0;
}
