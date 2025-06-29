#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,11};
    int product=1;
   
    for(int i=0;i<=4;i++){
        product *= arr[i];
    }
    printf("\n%d",product);


    return 0;
}