/*

A
A B
A B C
A B C D
A B C D E

*/

#include<stdio.h>

int main()
{

	int i=65,j;

	while(i<=69)
	{
		j=65;	
		while(j<=i)
		{
			printf("%c ",j);
			j++;
	        }
	     printf("\n");
		
	     i++;
	
	}
	
	return 0;

}