#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ENC_LINE_CHARS 120
#define MAX_DEC_LINE_CHARS 255
#define MAX_STRING_LEN     255
#define MIN_ARGS           2
#define MAX_ARGS           3

//prototypes
bool validateCommandArgs(int argc, char* argv[]);
void encryptFile(char fileName[MAX_STRING_LEN]);
void decryptFile(char fileName[MAX_STRING_LEN]);
bool fileExists(char fileName[MAX_STRING_LEN]);

