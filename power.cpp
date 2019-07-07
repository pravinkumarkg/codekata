#include <iostream>
using namespace std;

int main() {
	int power,exponent,base,i;
	cin>>base>>exponent;
	power=1;
	for(i=1;i<=exponent;i++)
	{
		power=power*base;
	}
	cout<<power;
	return 0;
}
