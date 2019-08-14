#include<bits/stdc++.h>
using namespace std;

int get_divisors(long long n)
{
	int count=0;
	for (int i=1;i<=sqrt(n);i++)
		if(n%i==0)
			count++;
	return 2*count;
}

int main()
{
	long long n=1;
	int divisors=0;
	while(1)
	{
		long long triangle_number;
		triangle_number=(n*(n+1))/2;
		int divisors=get_divisors(triangle_number);
		cout<<divisors<<"\t";
		if(divisors>500)
			break;
		n++;	
	}
	cout<<n;
	
}