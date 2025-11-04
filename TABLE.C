#include <stdio.h>

int main() {
    int tb, ts;
    printf("Enter table number: ");
    scanf("%d", &tb);

    printf("Enter table size: ");
    scanf("%d", &ts);

    for (int i = 1; i <= ts; i++) {
        printf("%d * %d = %d
", i, tb, i * tb);
    }

    return 0;
}
