
#include <stdio.h>

int main() {
    int n;

    printf("Nh?p m?t s? nguy�n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui l�ng nh?p m?t s? nguy�n duong.\n");
        return 1;
    }

    printf("C�c u?c c?a s? %d l�: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

