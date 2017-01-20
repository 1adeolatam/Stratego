#ifndef __TEXTDISPLAY_H__
#define __TEXTDISPLAY_H__

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
class TextDisplay
{
typedef std::vector< std::vector<char> > TextBoard;
TextBoard grid;

public:
TextDisplay(); 

char returnChar(int r, int c);
void notify(int r, int c, char );
void notify(std::vector<char> rows);
friend std::ostream &operator<<(std::ostream &o, TextDisplay &);
};
#endif // __TEXTDISPLAY_H__
