#include<stdio.h>
int WayOfstair(int x){
    if(x<=3)
     return x;
    int y=WayOfstair(x-3)+WayOfstair(x-1)+WayOfstair(x-2);
    return y;
}

int main(){
    int n;
    printf("enter the number of stair:");
    scanf("%d",&n);
    int m=WayOfstair(n);
 printf("%d",m);
return 0;
}
