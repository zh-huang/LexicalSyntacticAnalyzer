#include <iostream>
#include <fstream>
#include <string>

#pragma once

using namespace std;

enum TokenType{
    KEYWORDS,
    IDENTIFIER,
    INVALID
};

struct Token{
    TokenType type;
    std::string value;
};

Token getNextToken(ifstream& iFile);