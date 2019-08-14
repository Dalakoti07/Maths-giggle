#include<iostream>
using namespace std;

int main()
{
	long long a=1000000,count=0;
	long long max_count=-2,answer;
	while(a!=10)
	{
		count=0;
		long long a_start=a,store_a=a;
		//cout<<"a was "<<a_start;

		while(a_start!=1)
		{
		if(a_start%2)
			a_start=a_start*3+1;
		else
			a_start/=2;
		//cout<<" a = "<<a_start<<endl;
		count++;	
		}
		count++;
		cout<<count<<"\t";
		if(count>max_count)
			{
				max_count=count;
				answer=store_a;
			}
		a--;
		//cout<<" and number of steps to go to one was "<<count<<endl;
	}
	cout<<max_count<<"answer is below ";
	cout<<answer;
}