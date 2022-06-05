#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[5] = {0};
    char name[5] = {'a'};

    // first, print them out raw
    printf("numbers raw: %d, %d, %d, %d, %d\n",
            numbers[0], numbers[1], numbers[2],
            numbers[3], numbers[4]);

    printf("name raw: %c, %c, %c, %c, %c\n",
            name[0], name[1], name[2],
            name[3], name[4]);

    // set up the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    // set up the name
    name[0] = 'F';
    name[1] = 'i';
    name[2] = 'c';
    name[3] = 'o';
    name[4] = '\0';

    // print them out initialized
    printf("numbers initialized: %d, %d, %d, %d, %d\n",
            numbers[0], numbers[1], numbers[2],
            numbers[3], numbers[4]);

    printf("name initialized: %c, %c, %c, %c, %c\n",
            name[0], name[1], name[2],
            name[3], name[4]);

    // print the name like a string
    printf("name (string): %s\n", name);

    // another way to use name
    char *another = "Fico";

    printf("another: %s\n", another);

    printf("another each: %c, %c, %c, %c, %c\n",
            another[0], another[1], another[2],
            another[3], another[4]);

    return 0;
}