#include<iostream>
using namespace std;
float pi = 3.14;
void area(int l,int b)
{			
	cout<<"\n\nThe Area of Rectangle is : "<<l*b<<endl;	
}

void area()
{
	int l,h;
	cout<<"Enter base of Triangle : ";
	cin>>l;
	cout<<"Enter height of Triangle : ";
	cin>>h;
	cout<<"\n\nThe Area of Triangle is : "<<l*h/2;
}

void area(int l)
{
	cout<<"\n\nThe Area of Circle is "<<pi * l * l;
}

int main()
{
	int l,b;
	cout<<"Enter the Parameters to find Area : "<<endl<<"(for area of circle enter breadth = 0) and (for area of triangle enter both input = 0)"<<endl;
	cout<<"\n\nEnter Value of Length : ";
	cin>>l;
	cout<<"Enter Value of Breadth : ";
	cin>>b;
	if(b == 0)
	{
		area(l);
	}
	else if (l == 0 && b == 0)
	{
		area();
	}
	else
	{
		area(l,b);
	}
	
}

