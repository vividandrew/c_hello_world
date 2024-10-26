#include <stdio.h>

int main(){

	char firstname[20];

	printf("Enter your name: ");
	fflush(stdout);
	scanf("%s", &firstname);
	printf("Hello, %s\n", firstname);

	return 0;
}
