class Image
{
    int m_x,m_y,m_width,m_height;

public:
    Image();
    Image(int, int,int, int);
    Image (const Image &);
    void Move(int,int);
    int scale(int);
    void ReSize(int, int);
    void display();

    int get_x();
    int get_y();
    int get_width();
    int get_height();
};

