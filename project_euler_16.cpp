#include<iostream>
using namespace std;
int arr[1000]={0};
int main()
{
	int size=1;
	arr[0]=1;
	cout<<"Enter the power of 2 ";
	int n;
	cin>>n;
	int carry=0;
	while(n--)
	{
		int i=0;
		for(i=0;i<size;i++)
		{
			arr[i]=arr[i]*2+carry;
			carry=arr[i]/10;
			arr[i]%=10;
		}
		if(carry)
			{
				arr[i]=carry;
				carry/=10;
				size++;
			}
	}
	cout<<"THe answer is : \n";
	int sum=0;
	for(int i=size-1;i>=0;i--)
		sum+=arr[i];
	cout<<sum;
}