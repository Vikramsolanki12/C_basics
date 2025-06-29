#include<stdio.h>
int maze(int sr,int sc, int er,int ec){
    int rightways=0;
    int downways=0;
    if(sr==er&& sc==er) return 1;
    if(sr==er){
     rightways += maze(sr,sc+1,er,ec);}
    
    if(sc==ec){
     downways += maze(sr+1,sc,er,ec);}

    if(sr<er && sc<ec){
      rightways += maze(sr,sc+1,er,ec);
      downways += maze(sr+1,sc,er,ec);}

      
     int totalways =rightways+downways;

return totalways;
  
  
}





int main(){
    int sr,sc,er,ec;
    printf("enter starting row:");
    scanf("%d",&sr);

    printf("enter starting column:");
    scanf("%d",&sc);

    printf("enter ending row:");
    scanf("%d",&er);

    printf("enter ending column:");
    scanf("%d",&ec);

    printf("Number of ways=%d",maze(sr,sc,er,ec));




    return 0;
}