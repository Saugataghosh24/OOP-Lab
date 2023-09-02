#include <iostream>
#include <math.h>

using namespace std;

class Shape {
  public:
    Shape() {}
    virtual ~Shape() {}
    virtual float area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
  private:
    float radius;
  public:
    Circle(float r) : radius(r) {}
    ~Circle() {}
    float area() {
        return M_PI * radius * radius;
    }
    void display() {
        cout << "Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape {
  private:
    float length, width;
  public:
    Rectangle(float l, float w) : length(l), width(w) {}
    ~Rectangle() {}
    float area() {
        return length * width;
    }
    void display() {
        cout << "Rectangle with length " << length << " and width " << width << endl;
    }
};

class Trapezoid : public Shape {
  private:
    float base1, base2, height;
  public:
    Trapezoid(float b1, float b2, float h) : base1(b1), base2(b2), height(h) {}
    ~Trapezoid() {}
    float area() {
        return (base1 + base2) * height / 2;
    }
    void display() {
        cout << "Trapezoid with bases " << base1 << " and " << base2 << " and height " << height << endl;
    }
};

int main() {
    Shape *shapes[3];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 7.0);
    shapes[2] = new Trapezoid(3.0, 5.0, 6.0);
    for (int i = 0; i < 3; i++) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }
    return 0;
}
