//Create a structure Student containing fields for Roll No., Name, Class, Year and Total
 //Marks. Create 10 students and store them in a file
 #include<iostream>
 #include<fstream>
    using namespace std;
    struct Student
    {
        int rollno;
        string name;
        string classs;
        int year;
        int total;
    }; 
    int main()
    {
        Student s[10];
        ofstream fout;
        fout.open("student.txt");
        for(int i=0;i<10;i++)
        {
            cout<<"Enter the details of student "<<i+1<<endl;
            cout<<"Enter the roll no. of student "<<i+1<<endl;
            cin>>s[i].rollno;
            cout<<"Enter the name of student "<<i+1<<endl;
            cin>>s[i].name;
            cout<<"Enter the class of student "<<i+1<<endl;
            cin>>s[i].classs;
            cout<<"Enter the year of student "<<i+1<<endl;
            cin>>s[i].year;
            cout<<"Enter the total marks of student "<<i+1<<endl;
            cin>>s[i].total;
            fout<<s[i].rollno<<" "<<s[i].name<<" "<<s[i].classs<<" "<<s[i].year<<" "<<s[i].total<<endl;
        }
        fout.close();
        ifstream fin;
        fin.open("student.txt");
        for(int i=0;i<10;i++)
        {
            fin>>s[i].rollno>>s[i].name>>s[i].classs>>s[i].year>>s[i].total;
            cout<<"Roll no. of student "<<i+1<<" is "<<s[i].rollno<<endl;
            cout<<"Name of student "<<i+1<<" is "<<s[i].name<<endl;
            cout<<"Class of student "<<i+1<<" is "<<s[i].classs<<endl;
            cout<<"Year of student "<<i+1<<" is "<<s[i].year<<endl;
            cout<<"Total marks of student "<<i+1<<" is "<<s[i].total<<endl;
        }
        fin.close();
        return 0;
    }
//10