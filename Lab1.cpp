#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	start:		
	cout<<n<<" ";
	if(n!=1)
	{
		if(n%2!=0)
		{
			n=3*n+1;
		}
		else
		{
			n=n/2;
		}
		goto start;
	}
	return 0;
}
