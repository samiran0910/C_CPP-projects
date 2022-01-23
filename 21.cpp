// Create Matrix class using templates. Write a menu-driven program to perform following
//Matrix operations (2-D array implementation):
// 1. Addition of two matrices
// 2. Subtraction of two matrices
// 3. Multiplication of two matrices
// 4. Transpose of a matrix
// 5. Display the matrix
// 6. Exit

#include<bits/stdc++.h>
using namespace std;
template<class T>
class Matrix
{
    int r,c;
    T **arr;    
    public:     
    Matrix(int r,int c)
    {
        this->r=r;
        this->c=c;
        arr=new T*[r];
        for(int i=0;i<r;i++)
        {
            arr[i]=new T[c];
        }
    }           
    void getdata()
    {
        cout<<"Enter the elements of matrix"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
    }
    void display()
    {
        cout<<"The matrix is:"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    Matrix<T> operator+(Matrix<T> m)
    {
        Matrix<T> temp(r,c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.arr[i][j]=arr[i][j]+m.arr[i][j];
            }
        }
        return temp;
    }
    
    Matrix<T> operator-(Matrix<T> m)
    {
        Matrix<T> temp(r,c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.arr[i][j]=arr[i][j]-m.arr[i][j];
            }
        }
        return temp;
    }
    
    Matrix<T> operator*(Matrix<T> m)
    {
        Matrix<T> temp(r,m.c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<m.c;j++)
            {
                temp.arr[i][j]=0;
                for(int k=0;k<c;k++)
                {
                    temp.arr[i][j]+=arr[i][k]*m.arr[k][j];
                }
            }
        }
        return temp;
    }
    
    Matrix<T> transpose()
    {
        Matrix<T> temp(c,r);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.arr[j][i]=arr[i][j];
            }
        }
        return temp;
    }
    
    void menu()
    {
        int ch;
        do
        {
            cout<<"1. Addition of two matrices"<<endl;
            cout<<"2. Subtraction of two matrices"<<endl;
            cout<<"3. Multiplication of two matrices"<<endl;
            cout<<"4. Transpose of a matrix"<<endl;
            cout<<"5. Display the matrix"<<endl;
            cout<<"6. Exit"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1:
                {
                    Matrix<T> m1(r,c),m2(r,c);
                    m1.getdata();
                    m2.getdata();
                    Matrix<T> m3=m1+m2;
                    m3.display();
                    break;
                }
                case 2:
                {
                    Matrix<T> m1(r,c),m2(r,c);
                    m1.getdata();
                    m2.getdata();
                    Matrix<T> m3=m1-m2;
                    m3.display();
                    break;
                }
                case 3:
                {
                    Matrix<T> m1(r,c),m2(c,r);
                    m1.getdata();
                    m2=m2.transpose();
                    Matrix<T> m3=m1*m2;
                    m3.display();
                    break;
                }
                case 4:
                {
                    Matrix<T> m1(r,c);
                    m1.getdata();
                    Matrix<T> m2=m1.transpose();
                    m2.display();
                    break;
                }
                case 5:
                {
                    Matrix<T> m1(r,c);
                    m1.getdata();
                    m1.display();
                    break;
                }
                case 6:
                {
                    cout<<"Exiting"<<endl;
                    break;
                }
                default:
                {
                    cout<<"Invalid choice"<<endl;
                }
            }
        }while(ch!=6);
    }
};
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>r>>c;
    Matrix<int> m(r,c);
    m.menu();
    return 0;
}
    
