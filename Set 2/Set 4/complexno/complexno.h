template<typename T>
class complexno {
  T m_real;
  T m_image;
  public:
  complexno<T>();
  complexno<T>(T,T);
  T real();
  T image();
  void display();
};
