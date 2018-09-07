#include <stdio.h>
#include <stdlib.h>

void myfunction ( void ) {
	printf ("This is my-function!!!\n");
}


int yourfunction ( void ) {
	printf ("Your Function!!!\n");
	return 0;
}

int main(int argc, char* argv[]) {
	printf("Hello World!   ver 1.4.0.1\n");
        yourfunction();
        myfunction();
	return 0;
}
