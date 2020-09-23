#include<string>

class Ipadd{
private:
    int ipval[4];
public:
    Ipadd();
    Ipadd(int[],int[],int[],int[]);
    Ipadd(int[]);
    bool isLoopBack(int[],int[],int[],int[]);
    std::string getIPClass(int[]);
    void display();
};

