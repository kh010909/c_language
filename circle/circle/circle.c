#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int r = 0;
    printf("r = ");
    scanf_s("%d", &r);
    int x, y;
    for (x = -r;x <= r;x++) {
        for (y = -r;y <= r; y++) {
            if (r * r >= x * x + y * y) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}