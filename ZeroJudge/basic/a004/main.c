#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    while(scanf("%d",&year)!=EOF){
        // 西元年被4整除且不被100整除，或被400整除者即為閏年
        if(year%400==0){
            printf("閏年\n");
        }else if(year%4==0&&year%100!=0){
            printf("閏年\n");
        }else{
            printf("平年\n");
        }
    }
    return 0;
}