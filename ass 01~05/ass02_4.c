#include <stdio.h>

int main() {
    int h, m, time;
    printf("Enter hour and minute: ");
    scanf("%d %d", &h, &m);
    
    time = h * 60 + m + 75;
    printf("%d %d\n", (time / 60) % 24, time % 60);
    return 0;
}