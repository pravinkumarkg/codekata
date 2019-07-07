#include <iostream>
using namespace std;

int main() {
	char str;
	cin>>str;
	if(str>='a'&&str<='z'||str>='A'&&str<='Z')
	{
		cout<<"Alphabet";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
