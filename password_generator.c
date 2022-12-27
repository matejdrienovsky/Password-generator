#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int password_generator(length)
{
    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\<>,.?/\|";
    printf("\t");
    for (int j = 0; j < length; j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t");
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        printf("%c", list[rand() % (sizeof list - 1)]);
    }
    printf("\n");
    printf("\t");
    for (int x = 0; x < length; x++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int length;
    printf("\t**********************************\n");
    printf("\t \t Password generator\n");
    printf("\t**********************************\n");
    printf("\tEnter length of the password : ");
    scanf("%d", &length);
    printf("\n");
    printf("\n");
    password_generator(length);
    return 0;
}