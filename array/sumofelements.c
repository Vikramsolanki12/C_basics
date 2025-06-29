#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,11};
    int sum=0;
   
    for(int i=0;i<=4;i++){
        sum += arr[i];
    }
    printf("\n%d",sum);


    return 0;
}