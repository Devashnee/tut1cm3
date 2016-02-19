#include <stdio.h>
#include <stdlib.h>
int main()

{
	int f;
	f = rand() %20 + 1;
	printf("the random number generated was  %d\n", f);

	if( f % 3 == 0) 
		printf("fizz");
	if (f % 5 == 0)
		printf("buzz");
	if (f % 3 == 0 && f % 5 == 0)
		printf("fizz buzz");
	system("pause");
	return 0;


}