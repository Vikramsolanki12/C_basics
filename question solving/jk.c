#include<stdio.h>
int main(){
    int num,reversed=0,original;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;
    
    while (num !=0)
    {
        reversed=reversed*10+num%10;
        num/=10;
    }
    if(original==reversed){
        printf("number is palindrome.");
    }else{
        printf("number is not palindrome.");
    }
    




    return 0;
}