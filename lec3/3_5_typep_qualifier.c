#include <stdio.h>

int main() {
    int Change = 5;
    Change = 6;
    const int DoesNotChange = 5;
    const char DoesNotChangeChar = 'A';
    printf("Change: %d\n",Change);
    printf("DoesNotChange: %d\n",DoesNotChange);
    printf("DoesNotChangeChar: %d\n",DoesNotChangeChar);
}
