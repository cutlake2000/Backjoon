// 백준 1271번
// '엄청난 부자2'
// https://www.acmicpc.net/problem/1271

#include <stdio.h>
#include <string.h>

int divine_Num(void){
    return 0;
}

int main(){
    char money[1001] = {0,};
    char man[1001] = {0,};
    char count[1001] = {0,};
    char output[1001] = {0,};
    int money_Len, man_Len;

    money_Len = strlen(money);
    man_Len = strlen(man);

    for (int i = 0 ; i < money_Len; i++) scanf("%1c", &money[i]);
    for (int i = 0 ; i < man_Len ; i++) scanf("%1c", &man[i]);
    
    for(int i = 0 ; i < money_Len ; i++){
        if (money[i] < man[i]){
        }
        else{

        }
    }
}