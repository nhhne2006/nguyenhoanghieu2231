
#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num;

    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d l� s? nguy�n t?.\n", num);
    } else {
        printf("%d kh�ng ph?i l� s? nguy�n t?.\n", num);
    }

    return 0;
}


