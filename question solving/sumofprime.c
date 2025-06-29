#include<stdio.h>

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<n;i++){
        return false;
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);





    return 0;
}