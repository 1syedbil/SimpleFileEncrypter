#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ENC_LINE_CHARS 120
#define MAX_DEC_LINE_CHARS 255
#define MAX_STRING_LEN     255

//prototypes
bool parseCommandArgs(char* argv[]);
void encryptFile(char fileName[MAX_STRING_LEN]);
void decryptFile(char fileName[MAX_STRING_LEN]);


