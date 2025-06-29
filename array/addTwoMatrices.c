#include<stdio.h>
int main(){
    int m,n,arr[50][50],brr[50][50],sum[50][50];
    printf("enter the number of rows:");
    scanf("%d",&m);

    printf("enter the number of columns:");
    scanf("%d",&n);

    printf("enter 1st matrix.\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter element %d%d:",i+1,j+1);
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    printf("enter 2nd matrix.\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter element %d%d:",i+1,j+1);
            scanf("%d ",&brr[i][j]);
        }
        printf("\n");
    }




    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }

    printf("sum of matrices is:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",sum[i][j]);
            if(j==n-1){
                printf("\n");
            }
        }
        printf("\n");
    }





    return 0;
}