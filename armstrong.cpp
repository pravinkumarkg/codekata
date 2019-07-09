#include <iostream>
using namespace std;

int main() {
	int num,rem,orig,sum=0;
	cin>>orig;
	num=orig;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==orig)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
		
	}
	return 0;
}
