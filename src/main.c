#include "functions.h"

int main(int argc, char* argv[])
{
	if (!validateCommandArgs(argc, argv))
	{
		return 1;
	}
	else
	{
		if (argc == 2 || strcmp(argv[2], "-encrypt") == 0)
		{
			encryptFile(argv[1]);
		}
		else
		{
			decryptFile(argv[1]);
		}
	}

	return 0;
}
