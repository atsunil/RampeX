#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    const char correctUsername[] = "admin";
    const char correctPassword[] = "123";

    printf("Enter username: ");
    scanf("%19s", username);

    printf("Enter password: ");
    scanf("%19s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}