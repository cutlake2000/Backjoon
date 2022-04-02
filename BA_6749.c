// 백준 6749번
// 'Next in line'
// https://www.acmicpc.net/problem/6749

#include <stdio.h>

int main(){
    int fn, sn;
    fn = sn = 0;
    scanf("%d %d", &fn, &sn);
    printf("%d", sn + (sn - fn));
}