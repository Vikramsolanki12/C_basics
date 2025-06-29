#include<stdio.h>
int main()
{
    int m,n,p,q,a[100][100],b[100][100],res[100][100];
    printf("enter order of 1st matrix:");
    scanf("%d %d",&m,&n);
    printf("enter order of 2nd matrix:");
    scanf("%d %d",&p,&q);

    if(n!=p){
        printf("enter correct order of matrix.");
    }
    else{
        printf("enter elements of 1st matrix:");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter elements of 2nd matrix:");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]+b[k][j];
                }
            }
        }
        printf("the product of the two matrices is\n :");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d\n",res[i][j]);
            }
            printf("\n");
        }
    }









    return 0;
}