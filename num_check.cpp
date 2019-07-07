#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	if(num<0)
	{
		cout<<"Invalid";
	}
	else if(num%2==0)
	{
		cout<<"Even";
	}
	else
	{
		cout<<"Odd";
	}
	return 0;
}
