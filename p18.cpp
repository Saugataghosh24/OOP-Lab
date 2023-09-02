#include<iostream>
#include<math.h>
using namespace std;

class Points
{
    int x,y,z;
    public :
    Points()
    {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }

    Points(int a, int b, int c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }

    void distance(Points a, Points b)
    {
        double d = sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(a.z-b.z,2));
        cout << "The distance between the points is = " << d;
    }
    
};
int main()
{
    Points P1;
    Points P2(1,1,1);
    
    P1.distance(P1,P2);


   
   return 0;
}