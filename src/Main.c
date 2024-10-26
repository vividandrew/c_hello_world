#include <stdio.h>

int main(){

	char firstname[20] = "Andrew";

	printf("Enter your name: ");
	fflush(stdout);
	scanf("%s", firstname);
	printf("Hello, %s\n", firstname);

	printf("You have now entered the world of C coding");

	return 0;
}
