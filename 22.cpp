/*Create the Person class. Create some objects of this class (by taking information from the
user). Inherit the class Person to create two classes Teacher and Student class. Maintain the 
respective information in the classes and create, display and delete objects of these two
classes (Use Runtime Polymorphism).*/
#include<iostream>
using namespace std;
class Person
{
    int age;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter the age"<<endl;
        cin>>age;
        cout<<"Enter the name"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<"Age is "<<age<<endl;
        cout<<"Name is "<<name<<endl;
    }
};

class Teacher:public Person
{
    int salary;
    public:
    void getdata()
    {
        Person::getdata();
        cout<<"Enter the salary"<<endl;
        cin>>salary;
    }
    void display()
    {
        Person::display();
        cout<<"Salary is "<<salary<<endl;
    }
};
class Student:public Person
{
    int marks;
    public:
    void getdata()
    {
        Person::getdata();
        cout<<"Enter the marks"<<endl;
        cin>>marks;
    }
    void display()
    {
        Person::display();
        cout<<"Marks is "<<marks<<endl;
    }
};
int main()
{
    Teacher t;
    Student s;
    cout<<"Enter the details of teacher"<<endl;
    t.getdata();
    cout<<"Enter the details of student"<<endl;
    s.getdata();
    cout<<"Teacher details are:"<<endl;
    t.display();
    cout<<"Student details are:"<<endl;
    s.display();
    return 0;
}
