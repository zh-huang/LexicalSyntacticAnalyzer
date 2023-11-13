#include "lexer.h"

const vector<string> keywords = {"int",  "void",  "if",
                                 "else", "while", "return"};

const vector<string> operators = {
    "==", ">=", "<=", "!=", "+", "-", "*", "/", ">", "<"};

const vector<string> comments = {"/*", "*/", "//"};

bool isLetter(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch > 'A' && ch <= 'Z') || ch == '_';
}

bool isDigit(char ch) { return ch >= '0' && ch < '9'; }

bool isKeyword(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length()) {
        return false;
    }
    for (const string &keyword : keywords) {
        if (line.compare(start, keyword.length(), keyword) == 0) {
            if (start + keyword.length() == line.length() ||
                (!isLetter(line[start + keyword.length()]) &&
                 !isDigit(line[start + keyword.length()]))) {
                word = keyword;
                return true;
            }
        }
    }
    return false;
}

bool isIdentifier(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || !isLetter(line[start])) {
        return false;
    }
    for (unsigned int i = start;
         i < line.length() && (isLetter(line[i]) || isDigit(line[i])); ++i)
        word += line[i];
    return true;
}

bool isValue(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || !isDigit(line[start])) {
        return false;
    }
    for (unsigned int i = start; i < line.length() && isDigit(line[i]); ++i)
        word += line[i];
    return true;
}

bool isAssignmentNumber(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || line[start] != '=') {
        return false;
    }
    for (unsigned int i = start + 1; i < line.length(); ++i) {
        if (isDigit(line[i] || isLetter(line[i]))) break;
        if (line[i] == '=' || line[i] == '>' || line[i] == '<') return false;
    }
    word = "=";
    return true;
}

bool isOperator(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length()) {
        return false;
    }
    for (const string &keyword : operators) {
        if (line.compare(start, keyword.length(), keyword) == 0) {
            word = keyword;
            return true;
        }
    }
    return false;
}

bool isBoundarySymbol(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || line[start] != ';') {
        return false;
    }
    word = ";";
    return true;
}

bool isSeparator(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || line[start] != ',') {
        return false;
    }
    word = ",";
    return true;
}

bool isCommentNumber(const string &line, string &word, unsigned int &start)
{
    if (start + 2 >= line.length()) {
        return false;
    }
    for (auto &comment : comments) {
        if (line.compare(start, comment.length(), comment) == 0) {
            word = comment;
            return true;
        }
    }
    return false;
}

bool isLeftParenthesis(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || line[start] != '(') {
        return false;
    }
    word = "(";
    return true;
}

bool isRightParenthesis(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || line[start] != ')') {
        return false;
    }
    word = ")";
    return true;
}

bool isLeftBigParenthesis(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || line[start] != '{') {
        return false;
    }
    word = "{";
    return true;
}

bool isRightBigParenthesis(const string &line, string &word,
                           unsigned int &start)
{
    if (start >= line.length() || line[start] != '}') {
        return false;
    }
    word = "}";
    return true;
}

bool isLetter(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || !isLetter(line[start])) {
        return false;
    }
    word = line[start];
    return true;
}

bool isNumber(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || !isDigit(line[start])) {
        return false;
    }
    word = line[start];
    return true;
}

bool isEndingCharacter(const string &line, string &word, unsigned int &start)
{
    if (start >= line.length() || line[start] != '#') {
        return false;
    }
    word = "#";
    return true;
}
