# include <stdio.h>

int main() {
    int h, m;
    printf("Enter hour and minute: ");
    scanf("%d %d", &h, &m);
    printf("%d %d\n", ((((h * 60) + m + 75) / 60) % 24), ((h * 60) + m + 75) % 60);

    return 0;
}