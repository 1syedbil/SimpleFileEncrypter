#include "functions.h"

int main(int argc, char* argv[])
{
	if (!validateCommandArgs(argc, argv))
	{
		return 1;
	}
	else
	{
		printf("Hello World.\n");
		return 0;
	}

	return 0;
}
