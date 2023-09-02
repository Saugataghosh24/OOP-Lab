#include<iostream>
#include<math.h>
using namespace std;

class Rectangle
{
    int length,breadth;
    public :
    Rectangle()
    {
        this->length = 0;
        this->breadth = 0;
    }

    Rectangle(int a, int b)
    {
        this->length = a;
        this->breadth = b;
    }

    void Area()
    {
        int area = length*breadth;
        cout << "The area of the rectangle is = " << area << "\n";
    }
    
};
int main()
{
    Rectangle R1(1,2);
    Rectangle R2(2,2);
    Rectangle R3(2,3);
    Rectangle R4(4,5);
    R1.Area();
    R2.Area();
    R3.Area();
    R4.Area();
    


   
   return 0;
}