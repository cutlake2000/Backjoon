// 백준 1640번
// '동전 뒤집기'
// https://www.acmicpc.net/problem/1640

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int h, w;
    int** coin;
    scanf("%d %d", &h, &w);
    
    coin = (int**) malloc (sizeof(int) * (h + 1));
    for (int i = 0 ; i < h ; i++) coin[i] = (int*) malloc (sizeof(int) * (w + 1));
    memset(coin, 0, (w + 1) * (h + 1));

    for (int i = 0 ; i < h ; i++){
        for (int j = 0 ; j < w ; j++){
            scanf("%1d", &coin[i][j]);
        }
    }

    for (int i = 0 ; i < h ; i++){
        for (int j = 0 ; j < w ; j++) printf("%d", coin[i][j]);
        printf("\n");
    }

    for (int i = 0 ; i < h + 1 ; i++) free(coin[i]);
    free(coin);
}
