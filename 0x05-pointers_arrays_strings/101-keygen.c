#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MIN_LENGTH 8
#define MAX_LENGTH 12

char* generate_password() 
{
    char* password = malloc(MAX_LENGTH + 1);
    int password_length = rand() % (MAX_LENGTH - MIN_LENGTH + 1) + MIN_LENGTH;
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL));
    int i;
    for (i = 0; i < password_length; i++)
    {
        int index = rand() % strlen(charset);
      
        password[i] = charset[index];
    }
    password[password_length] = '\0';
    return password;
}


int main() {
    char* password = generate_password();
    printf("%s\n", password);
    free(password);
    return 0;
}



