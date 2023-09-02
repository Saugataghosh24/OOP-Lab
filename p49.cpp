#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle
{
    protected:
        string type;
    public:
        Vehicle(string type): type(type) {}
        virtual void display() = 0;
};

class Bus: public Vehicle
{
    private:
        int seats;
    public:
        Bus(string type, int seats): Vehicle(type), seats(seats) {}
        void display()
        {
            cout << "Type: " << type << endl;
            cout << "Seats: " << seats << endl;
        }
};

class Car: public Vehicle
{
    private:
        int doors;
    public:
        Car(string type, int doors): Vehicle(type), doors(doors) {}
        void display()
        {
            cout << "Type: " << type << endl;
            cout << "Doors: " << doors << endl;
        }
};

class Bike: public Vehicle
{
    private:
        int gears;
    public:
        Bike(string type, int gears): Vehicle(type), gears(gears) {}
        void display()
        {
            cout << "Type: " << type << endl;
            cout << "Gears: " << gears << endl;
        }
};

int main()
{
    Vehicle *v[3];
    v[0] = new Bus("Bus", 40);
    v[1] = new Car("Car", 4);
    v[2] = new Bike("Bike", 5);

    cout << endl;
    for(int i=0; i<3; i++)
    {
        cout << "Details of vehicle " << i+1 << ":" << endl;
        v[i]->display();
        cout << endl;

        Bus *b = dynamic_cast<Bus *>(v[i]);
        if(b)
        {
            cout << "Object is of type Bus" << endl;
        }
        Car *c = dynamic_cast<Car *>(v[i]);
        if(c)
        {
            cout << "Object is of type Car" << endl;
        }
        Bike *bi = dynamic_cast<Bike *>(v[i]);
        if(bi)
        {
            cout << "Object is of type Bike" << endl;
        }

        cout << "Type of object using typeid operator: " << typeid(*v[i]).name() << endl;
        cout << endl;
    }
    return 0;
}
