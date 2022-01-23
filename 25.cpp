//Write a program to retrieve the student information from file created in previous question and
// print it in following format:
//Roll No. Name Marks
#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    int rollno;
    string name;
    string classs;
    int year;
    int total;
};

void getdata(Student s[], int n)
{
    ifstream fin;
    fin.open("student.txt");
    for(int i=0;i<n;i++)
    {
        
        fin>>s[i].rollno>>s[i].name>>s[i].classs>>s[i].year>>s[i].total;
    }
    fin.close();
}
// print the data in following format: rollno name marks
void display(Student s[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<s[i].rollno<<"           "<<s[i].name<<"           "<<s[i].total<<endl;
    }
}
//driver program
int main()
{
    cout<<"The details of student are "<<endl;
    cout<<"Roll no.           Name           Marks"<<endl;
    Student s[10];
    getdata(s, 10);
    display(s, 10);
    return 0;
}