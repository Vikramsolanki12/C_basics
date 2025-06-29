#include<stdio.h>


void indec(int n){
   if(n==0)
    return ;
  printf("%d\n",n);
  indec(n-1);
  printf("%d\n",n);
  return;
}


int main(){
     int x;
     printf("enter a number:");
     scanf("%d",&x);
      indec(x);
     




    return 0;
}