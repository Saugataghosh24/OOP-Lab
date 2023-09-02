#include<iostream>
using namespace std;

class Employee
{
    public:
    string name;
    int salary;
    Employee()
    {
        cout << "Enter the name : \n";
        string s;
        cin >> s;
        cout << "Enter the salary : \n";
        int sal;
        cin >> sal;
        this->name = s;
        this->salary = sal;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Salary : " << salary << "\n";
    }

};

class Manager : public Employee
{
    public:
    string type;
    Manager()
    {
        cout << "Enter the type of manager : ";
        string s;
        cin >> s;
        this->type = s;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Salary : " << salary << "\n";
        cout << "Type : " << type << "\n";
    }

};

class Clerk : public Employee
{
    public:
    int allowance;
    Clerk()
    {
        cout << "Enter the allowance : ";
        int n;
        cin >> n;
        this->allowance = n;
    }

    void printDetails()
    {
        cout << "Name : " << name << "\n";
        cout << "Salary : " << salary << "\n";
        cout << "Allowance : " << allowance << "\n";
    }
 
};
    int main()
{
    Manager ob;
    Clerk obj;
    ob.printDetails();
    obj.printDetails();
    return 0;
}