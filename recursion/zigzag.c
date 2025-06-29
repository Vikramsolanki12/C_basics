#include<stdio.h>
void PreInPost(int n){
    if(n==0) return;
    printf("%d",n);
    PreInPost(n-1);

    printf("%d",n);
    PreInPost(n-1);

    printf("%d",n);
    PreInPost(n-1);

return;
}

int main(){
    int n;
    
    printf("enter a number:");
    scanf("%d",&n);

     
    PreInPost(n);



    return 0;
}