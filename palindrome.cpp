#include <iostream>
using namespace std;

int main() {
	int num,orig,rem,rev=0;
	cin>>num;
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==orig)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
