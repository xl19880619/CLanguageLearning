#include <stdio.h>

int main() {
    void draw();
    int max(int a, int b);
    int a, b, c;
    scanf("%d,%d,%d",&a,&b,&c);
    int m = max(max(a, b),c);
    printf("max = %d",m);
    // draw();
    return 0;
}

void draw() {
    char str[] = "*****\n";
    printf("  %s",str);
    printf("    %s",str);
    printf("      %s",str);
    printf("        %s",str);
}

int max(int a, int b) {
    if (a > b)
    {
        return a;
    } else
    {
        return b;
    }    
}