class currency {
	int m_rupees;
	int m_paise;
public:
	currency();
	currency(int, int);
	currency(int);
	currency(const currency&);
	currency operator+(const currency&);
	currency operator-(const currency&);
	currency operator+(int);
	currency operator-(int);
	currency operator++();
	currency operator++(int);
	int rupees();
	int paise();
	bool operator==(const currency&);
	bool operator<(const currency &);
	bool operator>(const currency&);
	void display();
};
