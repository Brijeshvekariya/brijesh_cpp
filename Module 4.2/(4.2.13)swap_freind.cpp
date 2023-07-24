#include<iostream>
using namespace std;

class num
{
	private :
		int a,b;
	public :
		friend void swap(); 
		num()
		{
			cout<<"Enter First number : ";
			cin>>a;
			cout<<"Enter Second number : ";
			cin>>b;
		}
};

void swap()
{
	num n;
	int x = n.a;
	int y = n.b;
	x+=y;
	y = x-y;
	x-=y;
	cout<<"\n\nBefore swaping A = "<<n.a<<" and B = "<<n.b<<endl;
	cout<<"\n\nAfter swaping A = "<<x<<" and B = "<<y<<endl;
}

int main()
{
	swap();
}