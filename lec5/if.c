#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age=18;
    bool have_driving_license = true;
    if (age >16 && have_driving_license)
        printf("You can drive.");
    return 0;
}