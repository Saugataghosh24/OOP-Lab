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
class Stack {
  public:
    Stack(int size = 10)  { 
        this->size = size;
        top= -1;
        data.resize(size); 
        
    }
    int size;
    int top;
    vector<T> data;
    
    void push(T x)
    {
      if (top == size - 1)
        cout << "Error: Stack overflow\n";
      else
        data[++top] = x;
    }
    
    T pop()
    {
      if (top == -1)
      {
        cout << "Error: Stack underflow\n";
        return T();
      }
      else
        return data[top--];
    }
    
    bool empty()
    {
      return top == -1;
    }
};

int main()
{
  Stack<int> s1(5);
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  cout << "Elements in the integer stack: ";
  while (!s1.empty())
    cout << s1.pop() << " ";
  cout << endl;
  
  Stack<Complex> s2(5);
  s2.push(Complex(1.0, 2.0));
  s2.push(Complex(2.0, 1.0));
  s2.push(Complex(3.0, 4.0));
  s2.push(Complex(4.0, 3.0));
  cout << "Elements in the complex number stack: ";
  while (!s2.empty())
    cout << s2.pop() << " ";
  cout << endl;
  
  return 0;
}
