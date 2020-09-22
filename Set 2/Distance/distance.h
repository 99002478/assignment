class Distance {
	int m_feet;
	int m_inches;
public:
	Distance();
	Distance(int, int);
	Distance(const Distance&);
	Distance operator+(const Distance&);
	Distance operator-(const Distance&);
	Distance operator+(int);
	Distance operator-(int);
	Distance operator++();
	Distance operator++(int);
	int get_m_feet();
	int get_m_inches();
	bool operator==(const Distance&);
	bool operator<(const Distance &);
	bool operator>(const Distance&);
	void display();
};
