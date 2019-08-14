#include<bits/stdc++.h>
using namespace std;

int arr[10001];
// memset donot work for other values, but it work for 0 and -1
void seive()
{
	for(int i=0;i<10001;i++)
		arr[i]=1;
	arr[1]=0;
	for(int i=2;i<10001;i++)
	{
		for(int j=2*i;j<10001;j=j+i)
			arr[j]=0;
	}
}

int d(int i)
{
	int sum=1;
	for(int j=2;j<i;j++)
		if(i%j==0)
			sum+=j;
}
int main()
{
	int answer=0;
	seive();
	vector<int> primes;
	for(int i=2;i<10001;i++)
		if(arr[i]==1)
			primes.push_back();
	for(int i=3;i<10001;i++)
	{
		// calculate if I has any pair or not
		int first;
		if(arr[i]==0)// prime pairs cannot form the amicable pairs
			{
				//find the sum of its divisors
				first=d(i);
			}
		int second=d(first);
		if(second==first)
			answer+=first;
	}
}