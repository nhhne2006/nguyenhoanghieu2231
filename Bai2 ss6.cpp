#include<stdio.h>

    int main() {
        int numbers[5];
        int evenCount = 0, oddCount = 0;
        printf("Hay nhap vao 5 so nguyen:\n");
        for (int i = 0; i < 5; i++) {
            printf("so thu %d: ",i + 1);
            scanf("%d", &numbers[i]);
        }
        for (int i = 0; i < 5; i++) {
            if(numbers[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            }
            printf("so luong so chan: %d\n", evenCount);
            printf("so luong so le: %d\n", oddCount);
        return 0;
        }
        
