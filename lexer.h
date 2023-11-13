#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#pragma once

using namespace std;

enum TokenType {
    KEYWORDS,               // int | void | if | else | while | return
    IDENTIFIER,             // letter(letter|number)*, not the same as keywords
    VALUE,                  // number(number)*
    ASSIGNMENT_OPERATOR,    // =
    OPERATOR,               // + | - | * | / | == | > | >= | < | <= | !=
    BOUNDARY_SYMBOL,        // ;
    SEPARATOR,              // ,
    COMMENT_OPERATOR,       // /* */ //
    LEFT_PARENTHESIS,       // (
    RIGHT_PARENTHESIS,      // )
    LEFT_BIG_PARENTHESIS,   // {
    RIGHT_BIG_PARENTHESIS,  // }
    LETTER,                 // |a|...|z|A|...|Z|
    NUMBER,                 // 0--9
    ENDING_CHARACTER,       // #
    INVALID
};

const vector<const char *> TokenTypeName = {"Keyword",
                                            "Identifier",
                                            "Value",
                                            "Assignment operator",
                                            "Operator",
                                            "Boundary symbol",
                                            "Separator",
                                            "Comment operator",
                                            "Left parenthesis",
                                            "Right parenthesis",
                                            "Left big parenthesis",
                                            "Right big parenthesis",
                                            "Letter",
                                            "Number",
                                            "Ending character",
                                            "Invalid"};

struct Token {
    int Ln;
    int Col;
    TokenType type;
    string value;
};

bool isKeyword(const string &word);
bool isIdentifier(const string &word);
bool isValue(const string &word);
bool isAssignmentNumber(const string &word);
bool isOperator(const string &word);
bool isBoundarySymbol(const string &word);
bool isSeparator(const string &word);
bool isCommentNumber(const string &word);
bool isLeftParenthesis(const string &word);
bool isRightParenthesis(const string &word);
bool isLeftBigParenthesis(const string &word);
bool isRightBigParenthesis(const string &word);
bool isLetter(const string &word);
bool isNumber(const string &word);
bool isEndingCharacter(const string &word);

class Lexer {
   public:
   Lexer(string filename);
    vector<Token> analyze(const string &filename);
    void printTokens();

   private:
    vector<Token> tokens;
    string source;
};
