#include<stdio.h>
int main(){
   int n,i,j;
   printf("enter a number of rows:");
   scanf("%d",&n);


   if(j==1||j==n){
    printf("*");
   }

 for(i=i;i<=n;i++){
    if(i==1||i==n||j==1||j==n){
        for(j=1;j<=n;j++)
        printf("*");
    }else{
        printf(" ");
    }
  printf("\n");
 }





    return 0;
}