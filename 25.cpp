//Write a program to retrieve information from a file and print it on the screen.

#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
    int rollno;
    char name[30];
    int class1;
};
// retrive data from file student.txt
int main()
{
    Student s[10];
    ifstream fin;
    fin.open("student.txt");
    for(int i=0;i<10;i++)
    {
        fin>>s[i].rollno>>s[i].name>>s[i].class1;
        cout<<"Roll no. of student "<<i+1<<" is "<<s[i].rollno<<endl;
        cout<<"Name of student "<<i+1<<" is "<<s[i].name<<endl;
        cout<<"Class of student "<<i+1<<" is "<<s[i].class1<<endl;
    }
    fin.close();
    return 0;
}