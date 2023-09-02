#include <iostream>
#include <vector>

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
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

class Stack {
  public:
    Stack(int size = 10) : size(size), top(-1) { data.resize(size); }
    int size;
    int top;
    vector<int> data;
};

template <>
void swap<Stack>(Stack &a, Stack &b)
{
  Stack temp = a;
  a = b;
  b = temp;
}

int main()
{
  
  int x = 5;
  int y = 9;
  cout << "Before swapping: x = " << x << " y = " << y << endl;
  ::swap(x, y);
  cout << "After swapping: x = " << x << " y = " << y << endl;
  
  Complex c1(1.0, 2.0);
  Complex c2(2.0, 1.0);
  cout << "Before swapping: c1 = " << c1 << " c2 = " << c2 << endl;
  ::swap(c1, c2);
  cout << "After swapping: c1 = " << c1 << " c2 = " << c2 << endl;
  
  Stack s1(5);
  s1.data[++s1.top] = 1;
  s1.data[++s1.top] = 2;
  Stack s2(10);
  s2.data[++s2.top] = 3;
  s2.data[++s2.top] = 4;
  cout << "Before swapping: s1.size = " << s1.size << " s1.top = " << s1.top << " s2.size = " << s2.size << " s2.top = " << s2.top << endl;
  ::swap(s1, s2);
  cout << "After swapping: s1.size = " << s1.size << " s1.top = " << s1.top << " s2.size = " << s2.size << " s2.top = " << s2.top << endl;
  
  return 0;
}
