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
    printf("File %s opened\n", filename);
    fclose(fp);
}