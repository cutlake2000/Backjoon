// 백준 20254번
 // 'Site Score'
 // https://www.acmicpc.net/problem/20254

 #include <stdio.h>

 int main(){
     int a, b, c, d;
     a = b = c = d = 0;
     scanf("%d %d %d %d %d", &a, &b, &c, &d);
     printf("%d", 56 * a + 24 * b + 14 * c + 6 * d);
 }