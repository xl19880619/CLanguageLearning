#include <stdio.h>

int main() {
    //阶乘
    int r;
    r = 1;
    int i;
    i = 2;
    int v;
    scanf("%d",&v);
    if (v == 2) {
        r = 2;
    }
    
    while (i <= v)
    {
        // printf("i:%d",i);
        r = r * i;
        i = i + 1;
        /* code */
    }
    printf("v:%d",r);
    
    return 0;
}