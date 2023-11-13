#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#pragma once

using namespace std;

// Enumeration of all token types
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
    LETTER,                 // |a|...|z|A|...|Z|_|
    NUMBER,                 // 0--9
    ENDING_CHARACTER,       // #
    INVALID
};

// Array mapping token types to strings
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

// Token structure
struct Token {
    unsigned int Ln;
    unsigned int Col;
    TokenType type;
    string value;
};

// Token recognition functions, in utilities.cpp
bool isKeyword(const string &line, string &word, unsigned int &start);
bool isIdentifier(const string &line, string &word, unsigned int &start);
bool isValue(const string &line, string &word, unsigned int &start);
bool isAssignmentNumber(const string &line, string &word, unsigned int &start);
bool isOperator(const string &line, string &word, unsigned int &start);
bool isBoundarySymbol(const string &line, string &word, unsigned int &start);
bool isSeparator(const string &line, string &word, unsigned int &start);
bool isCommentNumber(const string &line, string &word, unsigned int &start);
bool isLeftParenthesis(const string &line, string &word, unsigned int &start);
bool isRightParenthesis(const string &line, string &word, unsigned int &start);
bool isLeftBigParenthesis(const string &line, string &word,
                          unsigned int &start);
bool isRightBigParenthesis(const string &line, string &word,
                           unsigned int &start);
bool isLetter(const string &line, string &word, unsigned int &start);
bool isNumber(const string &line, string &word, unsigned int &start);
bool isEndingCharacter(const string &line, string &word, unsigned int &start);

class Lexer {
   public:
    Lexer(string filename);
    ~Lexer();

    // Analyze the source code and returns a vector of tokens
    vector<Token> analyze();
    // Print analyzed tokens to the console
    void printTokens();

   private:
    string source;          // Input file name
    ifstream file;          // Input file
    vector<Token> tokens;   // Analyzed tokens
};
