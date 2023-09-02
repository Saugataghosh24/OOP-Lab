#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age,height;

    Person()
    {

    }
    Person(string str,int a, int h)
    {
        this->name = str;
        this->age = a;
        this->height = h;
    }

    void printDetails()
    {
        cout << "Name : " << name<< "\n";
        cout << "Age : " << age<< "\n";
        cout << "Height :" << height<< "\n";
    }
};


class Student : public Person
{
    private:
    int roll, yearofadmission;
    public:
    Student()
    {

    }

    Student(int r, int y):Person("Saugata",22,164)
    {
        this->roll = r;
        this->yearofadmission = y;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age<< "\n";
        cout << "Height :" << height<< "\n";
        cout << "Roll : " << roll<< "\n";
        cout << "Yead of Admission : " << yearofadmission<< "\n";
    }
};

int main()
{
    Person ob("Manas",22,164);
    cout << "Information in class Person : \n";
    ob.printDetails();
    Student obj(07,2022);
    cout << "Information in class Student : \n";
    obj.printDetails();
    return 0;
}