#include<string>
using namespace std;

enum colors_t
{   red,green,blue,white,black
};


class colors {
    int m_r;
    int m_g;
    int m_b;

public:
    colors();
    colors(int, int, int);
    colors (int);
    colors(colors_t);
    colors_t getClr();
    void invert();
    void display();

};

