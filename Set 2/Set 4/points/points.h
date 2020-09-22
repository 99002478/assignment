enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};


template<typename T>
class points {
  T m_x;
  T m_y;
  public:
  points();
  points(T,T);
  T xaxis();
  T yaxis();
  T distanceFromOrigin();
  Quadrant quadrant();
  void display();
};
