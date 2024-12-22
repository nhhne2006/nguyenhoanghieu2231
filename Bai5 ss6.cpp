
#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nh?p nam: ");
    scanf("%d", &year);
    printf("Nh?p tháng (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Tháng không h?p l?. Vui lòng nh?p tháng t? 1 d?n 12.\n");
        return 1;
    }
    switch (month) {
        case 1:  // Tháng 1
        case 3:  // Tháng 3
        case 5:  // Tháng 5
        case 7:  // Tháng 7
        case 8:  // Tháng 8
        case 10: // Tháng 10
        case 12: // Tháng 12
            days = 31; // Các tháng có 31 ngày
            break;
        case 4:  // Tháng 4
        case 6:  // Tháng 6
        case 9:  // Tháng 9
        case 11: // Tháng 11
            days = 30; // Các tháng có 30 ngày
            break;
        case 2:  // Tháng 2 (x? lý nam nhu?n)
            // Ki?m tra nam nhu?n
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Nam nhu?n có 29 ngày
            } else {
                days = 28; // Nam thu?ng có 28 ngày
            }
            break;
        default:
            days = 0; // Tháng không h?p l?
            break;
    }
    printf("Tháng %d nam %d có %d ngày.\n", month, year, days);

    return 0;
}

