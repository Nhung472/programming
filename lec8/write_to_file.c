#include <stdio.h>
int main()
{
	char fn[50];
	char str[] = "C programming\n";
	FILE *fptr = fopen("fputc_test.txt", "w");
	for(int i=0; str[i] != '\n'; i++)
	{
		fputc(str[i], fptr);
	}
	fclose(fptr);
	return 0;
}