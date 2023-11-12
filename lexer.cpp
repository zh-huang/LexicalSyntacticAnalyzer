#include "lexer.h"

Token getNextToken(ifstream& iFile)
{
    Token token;
    token.type = INVALID;

    char ch;

    while (iFile.get(ch) && std::isspace(ch));

    return token;
}