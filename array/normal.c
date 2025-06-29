#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("enter marks of student %d:",i+1);
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<=4;i++){
    printf(" marks of student %d is %d\n",i+1,arr[i]);
    }


    return 0;
}