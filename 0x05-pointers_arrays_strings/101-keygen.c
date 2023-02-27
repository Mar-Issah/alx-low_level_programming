#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MIN_LENGTH 8
#define MAX_LENGTH 12

int main() {
    char* password = malloc(MAX_LENGTH + 1);
    int password_length = rand() % (MAX_LENGTH - MIN_LENGTH + 1) + MIN_LENGTH;
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL));

    for (int i = 0; i < password_length; i++)
    {
        int index = rand() % strlen(charset);
      
        password[i] = charset[index];
    }
    password[password_length] = '\0';
    return password;
}
