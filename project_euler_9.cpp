#include<iostream>
using namespace std;

int main()
{
	int a=3,b=4,c=5;
	while(a!=1000)
	{
		b=a+1;
		while(b!=1000)
		{
			c=b+1;
			while(c!=1000)
			{
				if((a*a+b*b==c*c)&&(a+b+c)==1000)
					cout<<" a = "<<a<<" b = "<<b<<" c = "<<c<<endl<<a*a+b*b<<"="<<c*c<<endl<<"Sum is "<<a+b+c<<"--------------------------------\n";
				c++;
			}
			b++;
		}
		a++;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	cout<<a*b*c<<endl;
	cout<<"a2 + b2 = "<<a*a+b*b<<"= c2"<<c*c;
}