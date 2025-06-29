#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={9,2,11,13,3,4,8,7};
    int min=INT_MAX;
    for(int i=0;i<=7;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    }
    printf("%d",min);


    return 0;
}