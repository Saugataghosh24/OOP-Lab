#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Complex {
  public:
    double real, imag;
    Complex(double real = 0.0, double imag = 0.0) {
        this->real = real;
        this->imag = imag;
    }
    
    
    friend bool operator>(const Complex &a, const Complex &b)
    {
      return (a.real > b.real) && (a.imag > b.imag);
    }
    
    friend ostream& operator<<(ostream& os, const Complex& c)
    {
      os << c.real << " + " << c.imag << "i";
      return os;
    }
};

template <typename T>
T max(T a, T b)
{
  return (a > b) ? a : b;
}

template <>
std::string max<std::string>(std::string a, std::string b)
{
  return (a.compare(b) > 0) ? a : b;
}

int main()
{
  
  cout << "Max of 5 and 9: " << ::max(5, 9) << endl;
  
  Complex c1(1.0, 2.0);
  Complex c2(2.0, 1.0);
  cout << "Max of " << c1 << " and " << c2 << ": " << ::max(c1, c2) << endl;
  
  string s1("hello");
  string s2("world");
  cout << "Max of " << s1 << " and " << s2 << ": " << ::max(s1, s2) << endl;
  
  return 0;
}
