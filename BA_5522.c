// 백준 5522번
// '카드 게임'
// https://www.acmicpc.net/problem/5522

#include <stdio.h>

int main(){
    int temp, result;
    temp = result = 0;

    for (int i = 0 ; i < 5 ; i++){
        temp = 0;
        scanf("%d", &temp);
        result += temp;
    }

    printf("%d", result);
}