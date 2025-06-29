#include<stdio.h>
int main(){
    int arr[4][2]={76,80,57,81,40,90,21,95};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }




    return 0;
}