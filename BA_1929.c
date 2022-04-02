// 백준 알고리즘 1929번
// "소수 구하기"
// https://www.acmicpc.net/problem/1929

#include <stdio.h>
#include <math.h>

int main(){
    int m_Num, n_Num;
    m_Num = n_Num = 0;

    scanf("%d %d", &m_Num, &n_Num);

    for (int i = m_Num ; i <= n_Num ; i++){

        for (int j = 1 ; pow(j, 2) <= i ; j++){
            printf("i : %d // j : %d\n", i, j);

            if ((i % j) == 0){
                
            }
            // if (j != 1){
            //     if ((i % j) == 0) break;
            //     else printf("%d\n", i);
            // }
        }
    }
}