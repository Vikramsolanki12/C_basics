#include<stdio.h>
void Steps(int n,char s,char h,char d){
    if(n==0) return;
    Steps(n-1,s,d,h);
    printf("%c->%c\n",s,d);
    Steps(n-1,s,h,d);

    
return;
}

int main(){
    int n;
    
    printf("enter number of rings:");
    scanf("%d",&n);

     
    Steps(n,'A','B','C');



    return 0;
}