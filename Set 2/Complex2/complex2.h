class complex2 {
 float m_real,m_imag;

 public:
     complex2();
     complex2(int,int);
     complex2(int);

     complex2 operator +(const complex2 &ref);
     complex2 operator -(const complex2 &ref);
     complex2 operator *(const complex2 &ref);
     complex2& operator ++();
     complex2 operator ++(int abc);
     bool operator==(const complex2 &ref);
     void display();
     float getreal();
     float getimag();
};

