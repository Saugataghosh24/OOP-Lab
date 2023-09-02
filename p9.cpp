#include<iostream>
using namespace std;

void swapByAddress(string *x, string *y)
{
    string z = *x;
    *x = *y;
    *y = z;
}
void swapByReference(string &x, string &y)
{
    string z = x;
    x = y;
    y = z;
}
int main()
{
   string a,b;
   a = "Manas"; b = "Pratim";
   cout << "Initial value of a = " << a << "\n";
   cout << "Initial value of b = " << b << "\n";
   swapByAddress(&a,&b);
   cout << "Final value of a swapping by address = " << a << "\n";
   cout << "Final value of b swapping by address = " << b << "\n";
   a = "Manas"; b = "Pratim";
   cout << "Initial value of a = " << a << "\n";
   cout << "Initial value of b = " << b << "\n";
   swapByReference(a,b);
   cout << "Final value of a swapping by reference = " << a << "\n";
   cout << "Final value of b swapping by reference = " << b << "\n";
   return 0;
}