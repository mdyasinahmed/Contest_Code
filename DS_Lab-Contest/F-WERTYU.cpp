#include <cstdio>
#include<map>
using namespace std;
 
int main()
{
    char c;

    map<char, char> t;
    
    t[' '] = ' ';
    t['\n'] ='\n';
    t['1'] = '`';
    t['2'] = '1';
    t['3'] = '2';
    t['4'] = '3';
    t['5'] = '4';
    t['6'] = '5';
    t['7'] = '6';
    t['8'] = '7';
    t['9'] = '8';
    t['0'] = '9';
    t['-'] = '0';
    t['='] = '-';
    t['W'] = 'Q';
    t['E'] = 'W';
    t['R'] = 'E';
    t['T'] = 'R';
    t['Y'] = 'T';
    t['U'] = 'Y';
    t['I'] = 'U';
    t['O'] = 'I';
    t['P'] = 'O';
    t['['] = 'P';
    t[']'] = '[';
    t['\\'] =']';
    t['S'] = 'A';
    t['D'] = 'S';
    t['F'] = 'D';
    t['G'] = 'F';
    t['H'] = 'G';
    t['J'] = 'H';
    t['K'] = 'J';
    t['L'] = 'K';
    t[';'] = 'L';
    t['\''] =';';
    t['X'] = 'Z';
    t['C'] = 'X';
    t['V'] = 'C';
    t['B'] = 'V';
    t['N'] = 'B';
    t['M'] = 'N';
    t[','] = 'M';
    t['.'] = ',';
    t['/'] = '.';

    while((c=getchar()) != EOF)
    {
        putchar(t[c]);
    }


    return 0;
}