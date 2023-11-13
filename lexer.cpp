#include "lexer.h"

Lexer::Lexer(string filename)
{
    source = filename;
    file.open(filename);
    if (!file.is_open()) {
        cout << "Can not open " << filename << endl;
        exit(-1);
    }
}

Lexer::~Lexer() { file.close(); }

void Lexer::printTokens()
{
    for (auto &i : tokens) {
        cout << "Ln" << i.Ln << ", Col" << i.Col << "\t" << i.value << "\t"
             << TokenTypeName[i.type] << endl;
    }
}

Token getType(const string &line, unsigned int &Col, const unsigned int &Ln,
              vector<int> availType)
{
    TokenType type = INVALID;
    string word("");
    word += line[Col];
    for (auto &i : availType) {
        if (i == KEYWORDS && isKeyword(line, word, Col)) {
            type = KEYWORDS;
        } else if (i == IDENTIFIER && isIdentifier(line, word, Col)) {
            type = IDENTIFIER;
        } else if (i == VALUE && isKeyword(line, word, Col)) {
            type = VALUE;
        } else if (i == ASSIGNMENT_OPERATOR && isKeyword(line, word, Col)) {
            type = ASSIGNMENT_OPERATOR;
        } else if (i == OPERATOR && isKeyword(line, word, Col)) {
            type = OPERATOR;
        } else if (i == BOUNDARY_SYMBOL && isKeyword(line, word, Col)) {
            type = BOUNDARY_SYMBOL;
        } else if (i == SEPARATOR && isKeyword(line, word, Col)) {
            type = SEPARATOR;
        } else if (i == COMMENT_OPERATOR && isKeyword(line, word, Col)) {
            type = COMMENT_OPERATOR;
        } else if (i == LEFT_PARENTHESIS && isKeyword(line, word, Col)) {
            type = LEFT_PARENTHESIS;
        } else if (i == RIGHT_PARENTHESIS && isKeyword(line, word, Col)) {
            type = RIGHT_PARENTHESIS;
        } else if (i == LEFT_BIG_PARENTHESIS && isKeyword(line, word, Col)) {
            type = LEFT_BIG_PARENTHESIS;
        } else if (i == RIGHT_BIG_PARENTHESIS && isKeyword(line, word, Col)) {
            type = RIGHT_BIG_PARENTHESIS;
        } else if (i == LETTER && isKeyword(line, word, Col)) {
            type = LETTER;
        } else if (i == NUMBER && isKeyword(line, word, Col)) {
            type = NUMBER;
        } else if (i == ENDING_CHARACTER && isKeyword(line, word, Col)) {
            type = ENDING_CHARACTER;
        }
    }
    return Token({Ln, Col + 1, type, word});
}

vector<Token> Lexer::analyze()
{
    unsigned int Ln = 0, Col = 0;
    string line;
    Token token;
    vector<int> availType = {KEYWORDS,
                             IDENTIFIER,
                             VALUE,
                             ASSIGNMENT_OPERATOR,
                             OPERATOR,
                             BOUNDARY_SYMBOL,
                             SEPARATOR,
                             COMMENT_OPERATOR,
                             LEFT_PARENTHESIS,
                             RIGHT_PARENTHESIS,
                             LEFT_BIG_PARENTHESIS,
                             RIGHT_BIG_PARENTHESIS,
                             LETTER,
                             NUMBER,
                             ENDING_CHARACTER};
    while (getline(file, line)) {
        ++Ln;
        while (Col < line.length()) {
            while (line[Col] < 33 || line[Col] > 126) {
                ++Col;
            }
            token = getType(line, Col, Ln, availType) tokens.push_back(token);
            Col += token.value.length();
        }
    }
    return tokens;
}
