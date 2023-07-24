#include<iostream>
using namespace std;

class num
{
	private :
		int a,b;
	public :
		friend void max(); 
		num()
		{
			cout<<"Enter First number : ";
			cin>>a;
			cout<<"Enter Second number : ";
			cin>>b;
		}
};

void max()
{
	num n;
	int x = n.a;
	int y = n.b;
	(x>=y) ? cout<<"\n\nThe Maximum numbers from given number is : "<<x<<endl : cout<<"\n\nThe Maximum numbers from given number is : "<<y<<endl;
}

int main()
{
	max();
}