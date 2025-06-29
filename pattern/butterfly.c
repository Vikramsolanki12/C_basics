#include<stdio.h>
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i+1;j++){
            printf("* ");
        }
        int counter=n+i-2;
        for(int j=2*(n-counter);j<=1;j++){
            printf("  ");
        }
        for(int j=1; j<=n-i+1;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}