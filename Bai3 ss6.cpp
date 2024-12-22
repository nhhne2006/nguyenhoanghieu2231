#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "12345"; 
    char enteredPassword[50]; 

    printf("Nhap mat khau: ");
    scanf("%49s", enteredPassword);  
    if (strcmp(correctPassword, enteredPassword) == 0) {
        printf("Mat khau dung \n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
