#ifndef CINTERPRET_TOKEN_H
#define CINTERPRET_TOKEN_H

#include "tokenType.h"

typedef struct Token {
    TokenType type;
    char* value;
} Token;

#endif //CINTERPRET_TOKEN_H
