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
        if (i.type != INVALID) {
            cout << "Ln" << i.Ln << ", Col" << i.Col << "\t" << i.value << "\t"
                 << TokenTypeName[i.type] << endl;
        }
    }
}

Token getType(const string &line, unsigned int &Col, const unsigned int &Ln,
              vector<int> availType)
{
    TokenType type = INVALID;
    string word("");
    for (auto &i : availType) {
        if (i == KEYWORDS && isKeyword(line, word, Col)) {
            type = KEYWORDS;
            return Token({Ln, Col + 1, type, word});
        } else if (i == IDENTIFIER && isIdentifier(line, word, Col)) {
            type = IDENTIFIER;
            return Token({Ln, Col + 1, type, word});
        } else if (i == VALUE && isValue(line, word, Col)) {
            type = VALUE;
            return Token({Ln, Col + 1, type, word});
        } else if (i == ASSIGNMENT_OPERATOR &&
                   isAssignmentNumber(line, word, Col)) {
            type = ASSIGNMENT_OPERATOR;
            return Token({Ln, Col + 1, type, word});
        } else if (i == OPERATOR && isOperator(line, word, Col)) {
            type = OPERATOR;
            return Token({Ln, Col + 1, type, word});
        } else if (i == BOUNDARY_SYMBOL && isBoundarySymbol(line, word, Col)) {
            type = BOUNDARY_SYMBOL;
            return Token({Ln, Col + 1, type, word});
        } else if (i == SEPARATOR && isSeparator(line, word, Col)) {
            type = SEPARATOR;
            return Token({Ln, Col + 1, type, word});
        } else if (i == COMMENT_OPERATOR && isCommentNumber(line, word, Col)) {
            type = COMMENT_OPERATOR;
            return Token({Ln, Col + 1, type, word});
        } else if (i == LEFT_PARENTHESIS &&
                   isLeftParenthesis(line, word, Col)) {
            type = LEFT_PARENTHESIS;
            return Token({Ln, Col + 1, type, word});
        } else if (i == RIGHT_PARENTHESIS &&
                   isRightParenthesis(line, word, Col)) {
            type = RIGHT_PARENTHESIS;
            return Token({Ln, Col + 1, type, word});
        } else if (i == LEFT_BIG_PARENTHESIS &&
                   isLeftBigParenthesis(line, word, Col)) {
            type = LEFT_BIG_PARENTHESIS;
            return Token({Ln, Col + 1, type, word});
        } else if (i == RIGHT_BIG_PARENTHESIS &&
                   isRightBigParenthesis(line, word, Col)) {
            type = RIGHT_BIG_PARENTHESIS;
            return Token({Ln, Col + 1, type, word});
        } else if (i == LETTER && isLetter(line, word, Col)) {
            type = LETTER;
            return Token({Ln, Col + 1, type, word});
        } else if (i == NUMBER && isNumber(line, word, Col)) {
            type = NUMBER;
            return Token({Ln, Col + 1, type, word});
        } else if (i == ENDING_CHARACTER &&
                   isEndingCharacter(line, word, Col)) {
            type = ENDING_CHARACTER;
            return Token({Ln, Col + 1, type, word});
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
        Col = 0;
        while (Col < line.length()) {
            while (Col < line.length() && (line[Col] < 33 || line[Col] > 126)) {
                ++Col;
            }
            if (Col == line.length()) {
                break;
            }
            token = getType(line, Col, Ln, availType);
            tokens.push_back(token);
            Col += token.value.length();
        }
    }
    return tokens;
}
