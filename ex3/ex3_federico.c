#include <stdio.h>

int main()
{
    int age = 10;
    float age2 = 10.6;
    int height = 72;
    char middle_initial = 'a';

    printf("I am %d years old.\n", age);
    printf("I am %i inches tall.\n\n", height);

    printf("I am %e years old.\n", age);
    printf("I am %e years old.\n\n", age2);
    printf("I am actually %f years old.\n", age2);
    printf("My middle initial is \"%c\".\n", middle_initial);

    return 0;
}
