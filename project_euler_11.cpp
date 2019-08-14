#include<bits/stdc++.h>
using namespace std;
#include<fstream>

int max_4(int grid[][20],int i,int j,int n)
{
	// travel in 8 direction and return the maximium product in best of them
	// travel left 4 blocks
	long arr[8];
	// first if left , right, up ,down ,up left,up right,down left and down right
	// move the left
	if(j-3<0)
		arr[0]=-90;
	else
		arr[0]=grid[i][j-0]*grid[i][j-1]*grid[i][j-2]*grid[i][j-3];
	
	// move the right
	if(j+3>=20)
		arr[1]=-90;
	else
		arr[1]=grid[i][j+0]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
	
	// move the up
	if(i-3<0)
		arr[2]=-90;
	else
		arr[2]=grid[i-0][j]*grid[i-1][j]*grid[i-2][j]*grid[i-3][j];
	
	//move the down
	if(i+3>=20)
		arr[3]=-90;
	else
		arr[3]=grid[i+0][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];

	// move the up left
	if(i-3<0||j-3<0)
		arr[4]=-90;
	else
		arr[4]=grid[i][j]*grid[i-1][j-1]*grid[i-2][j-2]*grid[i-3][j-3];
	// move the up right
	if(i-3<0||j+3>=20)
		arr[5]=-90;
	else
		arr[5]=grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3];
	// move the down left
	if(i+3>=20||j-3<0)
		arr[6]=-90;
	else
		arr[6]=grid[i][j]*grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3];
	//move the down right
	if(i+3>=20||j+3>=20)
		arr[7]=-90;
	else
		arr[7]=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
	//cout<<"the array is ";
	
	sort(arr,arr+8);
	
	return arr[7];
}

int find(int grid[][20])
{
	int large=-90;
	for(int i=0;i<20;i++)
		for(int j=0;j<20;j++)
		{
			int x=max_4(grid,i,j,20);
			if(x>large)
				large=x;
			//cout<<"--------answer from "<<i<<" "<<j<<" is "<<x<<endl;
		}
	return large;
}

int main()
{
	int grid[20][20];
	fstream file;
	string file_name="20_20_grid.txt",number_str;
	int num;
	file.open(file_name.c_str());
	for(int i=0;i<20;i++)
	{	for(int j=0;j<20;j++)
		{
			file>>number_str;
			grid[i][j]=stoi(number_str);
		}
	}
	cout<<find(grid);
}