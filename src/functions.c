#include "functions.h"

bool validateCommandArgs(int argc, char* argv[])
{
	char arg1[MAX_STRING_LEN] = "";
	char enc[MAX_STRING_LEN] = "-encrypt";
	char dec[MAX_STRING_LEN] = "-decrypt";

	if (argc < MIN_ARGS || argc > MAX_ARGS)
	{
		printf("Incorrect number of arguments.\n");
		return false;
	}

	strcpy(arg1, argv[1]);

	if (strchr(arg1, '-') != NULL)
	{
		printf("The second argument must be a file name, not a switch.\n");
		return false;
	}

	if (argc == MAX_ARGS && strcmp(argv[MIN_ARGS], enc) != 0 && strcmp(argv[MIN_ARGS], dec) != 0)
	{
		printf("Invalid switches.\n");
		return false;
	}

	return true;
}
