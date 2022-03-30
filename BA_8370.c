// 백준 8370번
// 'plane'
// https://www.acmicpc.net/problem/8370

int main(){
    int bn, bk, en, ek;
    bn = bk = en = ek = 0;
    scanf("%d %d %d %d", &bn, &bk, &en, &ek);
    printf("%d", bn * bk + en * ek);
}