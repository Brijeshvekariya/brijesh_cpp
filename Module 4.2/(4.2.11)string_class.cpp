#include<iostream>
using namespace std;

class strings
{
	public :
		string arr;
		strings operator +(strings s2)
		{
			strings result;
				result.arr = arr + s2.arr;
			return result;
		}
};

int main()
{
	strings s1,s2,result;
			cout<<"Enter first String : "<<endl;
//			for(int i = 0;;i++)
			getline(cin,s1.arr);
//				cout<<"Enter "<<i+1<<" elements : ";
//				cin>>m1.arr[i];
//			}
			cout<<"Enter elements of Second Matrix : "<<endl;
//			for(int i = 0;i<10;i++)
//			{
//				cout<<"Enter "<<i+1<<" elements : ";
				getline(cin,s2.arr);
			
	result = s1 + s2;
	cout<<"Result is :"<<endl;
//	for(int i = 0;i<10;i++)
//	{
//		cout<<"Enter "<<i+1<<" elements : ";
		cout<<result.arr<<endl;
}