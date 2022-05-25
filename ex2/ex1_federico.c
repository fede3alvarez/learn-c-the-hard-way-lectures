#include <stdio.h>

/* This is a comment*/
int main (int argc, char *argv[])
{
    int distance = 100;
    char dog_1[8] = "Hellmer";
    char baby[6] = "Ollie";
    char wifey[10] = "Evie";

    // this is also a comment
    printf("Run away from the evil %1$s.\n", dog_1);
    printf("You are %d miles away...\n\n", distance);
    printf("Keep running!\nYou'll never be far enough.\n\n");
    printf("Keep running!\nYou have to reach %1$s and %2$s and keep them safe!\n\n", baby, wifey);
    printf("Keep %2$s and %1$s safe\n", baby, wifey);

    return 0;
}
