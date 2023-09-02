#include<iostream>
#include<cmath>
using namespace std;
class Quadratic{
double two, one, zer;
public:
Quadratic(double t=0.0, double o=0.0, double z=0.0)
{
    two = t;
    one = o;
    zer = z;
}
Quadratic operator+(Quadratic q)
{
    Quadratic temp;
    temp.two = two + q.two;
    temp.one = one + q.one;
    temp.zer = zer + q.zer;
    return temp;
}
friend ostream &operator << (ostream &os, Quadratic &q);
friend istream &operator >> (istream &is, Quadratic &q);
double value(double x)
{
    return ((two*x*x) + (one*x) + zer);
}
void findRoot()
{
    double x1, x2, real, imag, dis;
    dis = (one*one) - (4*two*zer);
    if(dis>0)
    {
        x1 = (-one + sqrt(dis))/(2*two);
        x2 = (-one - sqrt(dis))/(2*two);
        cout<<"Two root of the equation is: "<<x1<<" and "<<x2<<endl;
    }
    else if(dis == 0)
    {
        x1= (-one)/(2*two);
        cout<<"The only root of the equation is: "<<x1;
    }
    else{
        real = -one/(2*two);
        imag = sqrt(-dis)/(2*two);
        cout<<"Roots are complex and different.........."<<endl;
        cout<<"one root is: "<<real<<" + "<<imag<<endl;
        cout<<"another root is: "<<real<<" - "<<imag<<endl;
    }
}
};
ostream &operator << (ostream &os, Quadratic &q)
{
 os<<"The Equation is: "<<q.two<<"x^2 + ("<<q.one<<")x + ("<<q.zer<<")"<<endl;
 return os;
}
istream &operator >> (istream &is, Quadratic &q)
{
    cout<<"enter value of a: ";
    is>>q.two;
    cout<<"enter value of b: ";
    is>>q.one;
    cout<<"enter value of c: ";
    is>>q.zer;
    return is;
}
int main()
{
    Quadratic q1(-4, 12, -9), q2, q3;
    cout << q1.value(2)<< endl;
    q1.findRoot();
    return 0;
}