#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void myFunction(bool condition);

int main () {
	printf("In main\n");

	myFunction(true);
	return 0;
}

void myFunction(bool condition)
{
    const char* x = "alpha"; // definition #1 of x

    printf("x = %s\n", x); // use #1 of x

    if (condition)
    {
        x = "beta"; // definition #2 of x
    } else {
        x = "gamma"; // definition #3 of x
    }

    printf("x = %s\n", x); // use #2 of x
}
