#include <stdio.h>
#include <string.h>
#include "tokenizer.h"

Token* tokenize(char* input_string) {
    for (int i = 0; i < strlen(input_string); i++) {
        printf("%c\n", input_string[i]);
    }
}