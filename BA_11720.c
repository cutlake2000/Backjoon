// 백준 11720번
// '숫자의 합'
// https://www.acmicpc.net/problem/11720

#include <stdio.h>
#include <string.h>

int main(){
    int input = 0, sum = 0;
    scanf("%d", &input);
    int num[100] = {0,};
    
    for (int i  = 0 ; i < input ; i++){
        scanf("%1d", &num[i]);
        sum += num[i];
    }
    
    printf("%d\n", sum);
}