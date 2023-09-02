#include<iostream>
using namespace std;

class Person
{
    protected:
        string name;
        int age;
    public:
        Person(string name, int age): name(name), age(age) {}
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Employee: virtual public Person
{
    protected:
        int salary;
    public:
        Employee(string name, int age, int salary): Person(name, age), salary(salary) {}
        void display()
        {
            Person::display();
            cout << "Salary: " << salary << endl;
        }
};

class Student: virtual public Person
{
    protected:
        string course;
    public:
        Student(string name, int age, string course): Person(name, age), course(course) {}
        void display()
        {
            Person::display();
            cout << "Course: " << course << endl;
        }
};

class Manager: public Employee, public Student
{
    private:
        string department;
    public:
        Manager(string name, int age, int salary, string course, string department): 
            Person(name, age), Employee(name, age, salary), Student(name, age, course), department(department) {}
        void display()
        {
            Person::display();
            Employee::display();
            Student::display();
            cout << "Department: " << department << endl;
        }
};

int main()
{
    Manager m("John Doe", 35, 70000, "MBA", "Marketing");
    m.display();
    return 0;
}
