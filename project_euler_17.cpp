#include<iostream>
using namespace std;

int main()
{
	int arr[1001]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8,6};
	// fill the twenties
	for(int i=21,j=1;i<=29;i++)
		arr[i]=arr[20]+arr[j++];
	// fill thirties to ninties
	arr[30]=6;
	arr[40]=5;
	arr[50]=5;
	
	arr[60]=5;
	arr[70]=7;
	arr[80]=6;
	arr[90]=6;
	for(int x=3;x<=9;x++)
	for(int i=x*10+1,j=1;i<=x*10+9;i++)
		arr[i]=arr[x*10]+arr[j++];
	arr[100]=7;
	// fill all the hundred
	for(int i=2;i<=9;i++)
		arr[100*i]=arr[i]+7;
	// fill from the hundred and one  to thousand - 1 
	for(int i=1;i<=9;i++)
	{
		for(int x=i*100+1,y=1;x<=i*100+99;x++)
			arr[x]=arr[100*i]+3+arr[y++];
	}
	arr[1000]=8+3;
	int sum=0;
	for(int i=1;i<1001;i++)
		{
			cout<<i<<" : "<<arr[i]<<endl;
			sum+=arr[i];
		}
	cout<<endl<<sum;
}