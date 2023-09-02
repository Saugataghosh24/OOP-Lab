#include<iostream>
using namespace std;
class Complex{
double real, imag;
public:
Complex(double r=0, double i=0)
{
    real = r;
    imag = i;
}
void display()
{
    cout<<endl<<real<<" + ("<<imag<<"i)"<<endl;
}
Complex operator+(Complex com)
{
    Complex temp;
    temp.real = real + com.real;
    temp.imag = imag + com.imag;
    return temp;
}
Complex operator-(Complex com)
{
    Complex temp;
    temp.real = real - com.real;
    temp.imag = imag - com.imag;
    return temp;
}
Complex operator*(Complex com)
{
    Complex temp;
    temp.real = (real * com.real)-(imag * com.imag);
    temp.imag = (real * com.imag) + (imag * com.real);
    return temp;
}
Complex operator/(Complex com)
{
    Complex temp;
    double denominater = (com.real * com.real) + (com.imag * com.imag);
    temp.real = ((real * com.real) + (imag * com.imag))/denominater;
    temp.imag = ((imag * com.real) - (real * com.imag))/denominater;
    return temp;
}
};
int main()
{
    Complex c1(7, 4);
    Complex c2(-3, -1);
    Complex result;
    result = c1 - c2;
    result.display();
}