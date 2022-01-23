#include <iostream>
#include <cmath>
using namespace std;
// create a class triangle
class triangle
{
	int a,b,c;
	public:
	void getdata()
	{
		cout<<"Enter the sides of the triangle"<<endl;
		cin>>a>>b>>c;
	}
	void display()
	{
		cout<<"Sides of the triangle are "<<a<<" "<<b<<" "<<c<<endl;
	}

	double area()
	{
		double s=(a+b+c)/2;
		return sqrt(s*(s-a)*(s-b)*(s-c));
	}
	
	triangle operator=(triangle t)
	{
		a=t.a;
		b=t.b;
		c=t.c;
		return *this;
	}
	bool operator==(triangle t)
	{
		if(a==t.a && b==t.b && c==t.c)
			return true;
		else
			return false;
	}
};
int main()
{
	triangle t1,t2;
	t1.getdata();
	t2.getdata();
	t1.display();
	t2.display();
	cout<<"Area of t1 is "<<t1.area()<<endl;
	cout<<"Area of t2 is "<<t2.area()<<endl;
	if(t1==t2)
		cout<<"t1 and t2 are equal"<<endl;
	else
		cout<<"t1 and t2 are not equal"<<endl;
	return 0;
}
