//check if a number is prime
#include <stdio.h> 

int main() 
{
	int n, flag = 0;
	char ch;
	while (ch!='q')
	{
		printf("Enter any number or 'q' to exit: ");
		scanf("%d", &n);
		scanf("%c", &ch);

		if (n==0 || n==1) flag=1;
		for (int i = 2; i <= (int) sqrt(n); i++)
			if (n % i == 0) {
				flag=1;
				break;
		}
		if(flag==1) printf()
	}
		

}
  
