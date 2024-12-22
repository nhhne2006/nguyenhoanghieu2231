
#include <stdio.h>

int main() {
    int n;

    printf("Nh?p m?t s? nguyên: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui lòng nh?p m?t s? nguyên duong.\n");
        return 1;
    }

    printf("Các u?c c?a s? %d là: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

