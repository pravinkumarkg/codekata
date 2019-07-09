#include <iostream>
using namespace std;

int main() {

	int n1,n2,num,rem,sum;
	cin>>n1>>n2;
	for(int i=n1;i<=n2;i++)
	{
		sum=0;
		num=i;
	for(;num>0;num/=10)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
	}
	if(sum==i)
	{
		cout<<i<<' ';
	}

	}

	return 0;
}
