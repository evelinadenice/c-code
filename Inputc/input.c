#include <stdio.h>

int main(void)
{
char buffer[50];
printf("Enter your first name: ");
scanf("%s", buffer);
printf("Hello %s", buffer);
}