#include <stdio.h>
int main(){
    const char*week[]={
        "Invalid", // 下标 0
        "Monday",  // 下标 1
        "Tuesday", // 下标 2
        "Wednesday",// 下标 3
        "Thursday",// 下标 4
        "Friday",  // 下标 5
        "Saturday",// 下标 6
        "Sunday"   // 下标 7
    };
    int day;
    if(scanf("%d",&day)==1){
        if(day>=1&&day<=7){

            printf("%s",week[day]);
        }
        
    }



    return 0;
}