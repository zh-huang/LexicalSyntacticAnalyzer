#include <string>
#include <unordered_set>

#include "lexer.h"

const std::unordered_set<std::string> keywords = {"int",  "void",  "if",
                                                  "else", "while", "return"};

const std::unordered_set<std::string> operators = {
    "+", "-", "*", "/", "==", ">", ">=", "<", "<=", "!="};

const std::unordered_set<std::string> comments = {"/*", "*/", "//"};

bool isLetter(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch > 'A' && ch <= 'Z') || ch == '_';
}

bool isDigit(char ch) { return ch >= '0' && ch < '9'; }

bool isKeyword(const std::string &word)
{
    return keywords.find(word) != keywords.end();
}

bool isIdentifier(const std::string &word)
{
    if (isKeyword(word)) {
        return false;
    }
    if (word.empty() || !isLetter(word[0])) {
        return false;
    }
    for (char ch : word) {
        if (!isLetter(ch) && !isDigit(ch)) {
            return false;
        }
    }
    return true;
}

bool isValue(const std::string &word)
{
    if (word.empty() || !isDigit(word[0])) {
        return false;
    }
    for (char ch : word) {
        if (!isDigit(ch)) {
            return false;
        }
    }
    return true;
}

bool isAssignmentNumber(const std::string &word) { return word == "="; }

bool isOperator(const std::string &word)
{
    return operators.find(word) != operators.end();
}

bool isBoundarySymbol(const std::string &word) { return word == ";"; }

bool isSeparator(const std::string &word) { return word == ","; }

bool isCommentNumber(const std::string &word)
{
    return comments.find(word) != comments.end();
}

bool isLeftParenthesis(const std::string &word) { return word == "("; }

bool isRightParenthesis(const std::string &word) { return word == ")"; }

bool isLeftBigParenthesis(const std::string &word) { return word == "{"; }

bool isRightBigParenthesis(const std::string &word) { return word == "}"; }

bool isLetter(const std::string &word)
{
    return word.length() == 1 && isLetter(word[0]);
}

bool isNumber(const std::string &word)
{
    return word.length() == 1 && isDigit(word[0]);
}

bool isEndingCharacter(const std::string &word) { return false; }
