
#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nh?p nam: ");
    scanf("%d", &year);
    printf("Nh?p th�ng (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Th�ng kh�ng h?p l?. Vui l�ng nh?p th�ng t? 1 d?n 12.\n");
        return 1;
    }
    switch (month) {
        case 1:  // Th�ng 1
        case 3:  // Th�ng 3
        case 5:  // Th�ng 5
        case 7:  // Th�ng 7
        case 8:  // Th�ng 8
        case 10: // Th�ng 10
        case 12: // Th�ng 12
            days = 31; // C�c th�ng c� 31 ng�y
            break;
        case 4:  // Th�ng 4
        case 6:  // Th�ng 6
        case 9:  // Th�ng 9
        case 11: // Th�ng 11
            days = 30; // C�c th�ng c� 30 ng�y
            break;
        case 2:  // Th�ng 2 (x? l� nam nhu?n)
            // Ki?m tra nam nhu?n
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Nam nhu?n c� 29 ng�y
            } else {
                days = 28; // Nam thu?ng c� 28 ng�y
            }
            break;
        default:
            days = 0; // Th�ng kh�ng h?p l?
            break;
    }
    printf("Th�ng %d nam %d c� %d ng�y.\n", month, year, days);

    return 0;
}

