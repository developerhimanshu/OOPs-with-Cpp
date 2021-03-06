#include <iostream>

using namespace std;

bool checkPrime(int n)
{
	if(n==1)return false;
	if(n==2||n==3)
		return true;
	if(n%2==0||n%3==0)
		return false;
	for(int i=5; i*i<n; i++)
	{
		if(n%i==0||n%(i+2)==0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cout<<"Enter the number which you want to check: ";
	cin>>n;
	if(checkPrime(n)==1)
		cout<<"=>The number is Prime"<<endl;
	else
		cout<<"=>The number is not Prime"<<endl;
	return 0;
}
