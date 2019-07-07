#include <iostream>
using namespace std;

int main() {
	char str;
	cin>>str;
	if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='A'||str=='E'||str=='I'||str=='O'||str=='U')
	{
		cout<<"Vowel";
	}
	else if(str>='a'&&str<='z'||str>='A'&&str<='Z')
	{
		cout<<"Consonant";
	}
	else
	{
		cout<<"invalid";
	}
	return 0;
}
