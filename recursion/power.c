#include<stdio.h>
int power(int x,int y){
    int z;
  if(y==1)
    return x;
  if(y==0)
    return 1;
if(y%2==0){
   z=power(x,y/2)*power(x,y/2);}
   else{
   z=power(x,y/2+1)*power(x,y/2);}


return z;
  
}





int main(){
    int a,b;
    printf("enter base value:");
    scanf("%d",&a);

    printf("enter power value:");
    scanf("%d",&b);

    printf("%d to the power %d is %d",a,b,power(a,b));




    return 0;
}