#include <stdio.h>
int main()
{
    char *filename = "readme.txt";
    FILE *fp = fopen(filename, "r");
    if(fp ==NULL)
    {
        printf("Can not open file %s", filename);
        return 1;
    }
    const unsigned MAX_LENGTH = 3;
    char buffer[MAX_LENGTH];
    while (fgets(buffer, MAX_LENGTH, fp))
    {
        printf("%s", buffer);
        printf("\n\n");
    }
    fclose(fp);
    return 0;
}