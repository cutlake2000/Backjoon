// 백준 14645번
// '와이버스 부릉부릉'
// https://www.acmicpc.net/problem/14645

#include <stdio.h>

int main(){
    int num, person_Num, in, out;
    num = person_Num = in = out = 0;

    scanf("%d %d", &num, &person_Num);

    for (int i = 0 ; i < num ; i++){
        in = out = 0;
        scanf("%d %d", &in, &out);
    }
    
    printf("비와이");
}