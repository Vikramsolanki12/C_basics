#include<stdio.h>
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    
    int first=0, second=1,next;
    printf("fibonacci series:");
    for(int i=0;i<=n;i++){
        if(i<=1) next=i;
        else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\n",next);
    }
    




    return 0;
}