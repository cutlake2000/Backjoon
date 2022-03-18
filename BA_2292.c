// 백준 알고리즘 2292번
// https://www.acmicpc.net/problem/2292

#include <stdio.h>

int main(){
    long room = 0, result = 0, check = 6;

    scanf("%ld", &room);
    
    room -= 1;
    result++;
    
    if (room > 0){
        do{
            result++;
            room -= check;
            check += 6;
        } while(room > 0);
    }
    
    printf("%ld\n", result);
}