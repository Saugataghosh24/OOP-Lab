#include<iostream>
#include<cmath>
using namespace std;
class Point{
int x, y;
public:
Point(int x1 = 0, int y1=0)
{
    x = x1;
    y = y1;
}
void reader()
{
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}
void writter(int x1, int y1)
{
    x = x1;
    y = y1;
}
double operator-(Point p1)
{
    return sqrt(pow((x-p1.x), 2.0) + pow((y-p1.y), 2.0));
}
};
int main()
{
    Point pointone, pointtwo;
    pointone.writter(2, 3);
    pointtwo.reader();
    pointone.reader();
    double dist = pointone - pointtwo;
    cout<<"the distance is "<<dist<<" unit"<<endl;
    return 0;
}