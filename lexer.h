#include <iostream>
#include <fstream>
#include <string>

#pragma once

using namespace std;

enum TokenType{
    KEYWORDS,               // int | void | if | else | while | return
    IDENTIFIER,             // letter(letter|number)*, not the same as keywords
    VALUE,                  // number(number)*
    ASSIGNMENT_NUMBER,      // =
    OPERATOR,               // + | - | * | / | == | > | >= | < | <= | !=
    BOUNDARY_SYMBOL,        // ;
    SEPARATOR,              // ,
    COMMENT_NUMBER,         // /* */ //
    LEFT_PARENTHESIS,       // (
    RIGHT_PARENTHESIS,      // )
    LEFT_BIG_PARENTHESIS,   // {
    RIGHT_BIG_PARENTHESIS,  // }
    LETTER,                 // |a|...|z|A|...|Z|
    NUMBER,                 // 0--9
    ENDING_CHARACTER,       // #
    INVALID
};

struct Token{
    TokenType type;
    std::string value;
};

Token getNextToken(ifstream& iFile);

bool isKeyword(const std::string &word);
bool isIdentifier(const std::string &word);
bool isValue(const std::string &word);
bool isAssignmentNumber(const std::string &word);
bool isOperator(const std::string &word);
bool isBoundarySymbol(const std::string &word);
bool isSeparator(const std::string &word);
bool isCommentNumber(const std::string &word);
bool isLeftParenthesis(const std::string &word);
bool isRightParenthesis(const std::string &word);
bool isLeftBigParenthesis(const std::string &word);
bool isRightBigParenthesis(const std::string &word);
bool isLetter(const std::string &word);
bool isNumber(const std::string &word);
bool isEndingCharacter(const std::string &word);